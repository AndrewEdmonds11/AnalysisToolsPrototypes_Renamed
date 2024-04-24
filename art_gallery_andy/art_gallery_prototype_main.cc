//
// taking art_gallery_prototype_macro.C and turning into a compiled program
//

#include <chrono>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <fstream>

#include "nlohmann/json.hpp"

#include "canvas/Utilities/InputTag.h"
#include "gallery/Event.h"

#include "TFile.h"
#include "TH1F.h"
#include "TInterpreter.h"
#include "TROOT.h"

#include "Offline/RecoDataProducts/inc/KalSeed.hh"

using namespace art;
using namespace std;
using namespace std::chrono;
using json = nlohmann::json;

class Variable {
public:
  enum {DOUBLE, INT} type;

  Variable() : func(noVar) { }

  Variable(const std::string& name) {
    setFunc(name);
  }

  void setFunc(const std::string& name) {
    if (name.find("momentum") != std::string::npos) {
      type = Variable::DOUBLE;
      func = momentum;
    }
    else if (name.find("time") != std::string::npos) {
      type = Variable::DOUBLE;
      func = time;
    }
    else if (name.find("surfaceId") != std::string::npos) {
      type = Variable::INT;
      func = surfaceId;
    }
    else if (name == "") {
      type = Variable::DOUBLE;
      func = noVar;
    }
  }

  double getValue(const mu2e::KalIntersection& kinter) const {
    switch(type) {
    case Variable::DOUBLE:
      return std::get<double (*)(const mu2e::KalIntersection& kinter)>(func)(kinter);
    case Variable::INT:
      return std::get<int (*)(const mu2e::KalIntersection& kinter)>(func)(kinter);
    default:
      return 0;
    }
  }

private:
  std::variant<double (*)(const mu2e::KalIntersection& kinter),
               int (*)(const mu2e::KalIntersection& kinter)> func;

  static double momentum(const mu2e::KalIntersection& kinter) { return kinter.momentum3().R(); }
  static double time(const mu2e::KalIntersection& kinter) { return kinter.time(); }
  static int surfaceId(const mu2e::KalIntersection& kinter) { return kinter.surfaceId().id(); }
  static double noVar(const mu2e::KalIntersection& kinter) { return 0; }
};


class SingleCut {
public:
  std::string _cut;

  SingleCut(const std::string& cut) : _cut(cut) {
    findComparator(cut);
    if (cut != "") {
      getVariable(cut);
      getValue(cut);
    }
  }

  void findComparator(const std::string& cut) {
    if ((_opStartPos = cut.find(">")) != std::string::npos) {
      _opEndPos = _opStartPos+1;
      func = this->greaterThan;
    }
    else if ((_opStartPos = cut.find(">=")) != std::string::npos) {
      _opEndPos = _opStartPos+2;
      func = this->greaterThanEqualTo;
    }
    else if ((_opStartPos = cut.find("<")) != std::string::npos) {
      _opEndPos = _opStartPos+1;
      func = this->lessThan;
    }
    else if ((_opStartPos = cut.find("<=")) != std::string::npos) {
      _opEndPos = _opStartPos+2;
      func = this->lessThanEqualTo;
    }
    else if ((_opStartPos = cut.find("==")) != std::string::npos) {
      _opEndPos = _opStartPos+2;
      func = this->equalTo;
    }
    else if ((_opStartPos = cut.find("!=")) != std::string::npos) {
      _opEndPos = _opStartPos+2;
      func = this->notEqualTo;
    }
    else if (cut == "") {
      func = this->noOp;
    }
  }

  void getVariable(const std::string& cut) {
    std::string var_name = cut.substr(0, _opStartPos);
    _var.setFunc(var_name);
  }

  void getValue(const std::string& cut) {
    switch(_var.type) {
    case Variable::DOUBLE:
      _value = std::stod(cut.substr(_opEndPos));
      break;
    case Variable::INT:
      _value = std::stoi(cut.substr(_opEndPos));
      break;
    default:
      _value = 0.0;
      break;
    }
  }

  bool evaluate(const mu2e::KalIntersection& kinter) const {
    switch(_var.type) {
    case Variable::DOUBLE:
      return std::get<bool (*)(double, double)>(func)(_var.getValue(kinter), std::get<double>(_value));
    case Variable::INT:
      return std::get<bool (*)(int, int)>(func)(_var.getValue(kinter), std::get<int>(_value));
    default:
      return true;
    }
  }

private:

  size_t _opStartPos; // position of the operator
  size_t _opEndPos; // position of the end of the operator
  std::variant<double, int> _value; // the cut value

  Variable _var;

  std::variant <bool (*)(double, double),
                bool (*)(int, int)> func;

  static bool greaterThan(double input, double check) {
    return input > check;
  }
  static bool greaterThanEqualTo(double input, double check) {
    return input >= check;
  }
  static bool lessThan(double input, double check) {
    return input < check;
  }
  static bool lessThanEqualTo(double input, double check) {
    return input <= check;
  }
  static bool equalTo(int input, int check) {
    return input == check;
  }
  static bool notEqualTo(double input, double check) {
    return input != check;
  }
  static bool noOp(double input, double check) {
    return true;
  }
};

class Cut {
public:
  Cut(const std::string& cut) {
    std::string_view view(cut);
    size_t opPos;
    if ((opPos = view.find("&&")) != std::string::npos) {
      _cuts.emplace_back(SingleCut(cut.substr(0, opPos)));
      _cuts.emplace_back(SingleCut(cut.substr(opPos+2)));
    }
    else {
      _cuts.emplace_back(SingleCut(cut));
    }
  }

  bool evaluate(const mu2e::KalIntersection& kinter) const {
    bool result = true;
    for (const auto& cut : _cuts) {
      //      std::cout << (int)kinter.surfaceId().id() << std::endl;
      //      std::cout << "AE: cut._cut = " << cut._cut << std::boolalpha << (cut.evaluate(kinter)) << std::endl;
      result &= cut.evaluate(kinter);
    }
    return result;
  }
private:
  std::vector<SingleCut> _cuts;

};

class Hist {
public:
  Hist(TH1D roothist, Variable var, Cut cut) : roothist(roothist), var(var), cut(cut) { }

  TH1D roothist;
  Variable var;
  Cut cut;

  void Fill(const mu2e::KalIntersection& kinter) { roothist.Fill(var.getValue(kinter)); }
  void Write() { roothist.Write(); }
};

int main(int argc, char** argv) {

  auto start_time = system_clock::now();

  if (argc != 4) {
    std::cout << "Missing arguments. They should be JSON configuration file, filelist and number of files" << std::endl;
    return -1;
  }

  std::string json_filename = *(argv+1);
  std::ifstream json_file(json_filename.c_str());
  json config = json::parse(json_file);
  //  std::cout << config["hists"] << std::endl;

  std::string filelist = *(argv+2);
  InputTag dem_tag{ "KKDeM" };

  int n_files = stoi(*(argv+3));
  vector<string> filenames;
  filenames.reserve(n_files); // set to number of files (the number of files in the dataset)
  std::ifstream input_filelist(filelist);
  if (input_filelist.is_open()) {
    std::string filename;
    while(std::getline(input_filelist,filename)) {
      filenames.emplace_back(filename);
      if (filenames.size()>=n_files) {
        break;
      }
    }
    input_filelist.close();
  }


  // Make histogram
  const auto& allHistsCfg = config["hists"];
  std::vector<Hist> allHists;
  for (const auto& hist_cfg : allHistsCfg) {
    double min_mom = hist_cfg["min_x"];
    double max_mom = hist_cfg["max_x"];
    double bin_width = hist_cfg["bin_width"];
    int n_mom_bins = (max_mom - min_mom) / bin_width;
    std::string histname = hist_cfg["name"];
    std::string histtitle = hist_cfg["title"];

    const auto& variable_cfg = hist_cfg["variable"];
    const auto& cut_cfg = hist_cfg["cut"];

    allHists.emplace_back(Hist(TH1D(histname.c_str(), histtitle.c_str(), n_mom_bins,min_mom,max_mom),
                               Variable(variable_cfg),
                               Cut(cut_cfg)
                               ));
  }

  // We'll record the time it takes to process each gallery::Event.
  vector<microseconds> times;

  for (gallery::Event ev(filenames); !ev.atEnd(); ev.next()) {
    auto const t0 = system_clock::now();

    auto const& dems =
      *ev.getValidHandle<vector<mu2e::KalSeed>>(dem_tag);
    if (!dems.empty()) {
      for (const auto& dem : dems) {
        for(size_t ikinter = 0; ikinter < dem.intersections().size(); ++ikinter){
          auto const& kinter = dem.intersections()[ikinter];

          for (size_t i_hist = 0; i_hist < allHists.size(); ++i_hist) {
            auto& hist = allHists.at(i_hist);
            if (hist.cut.evaluate(kinter)) {
              hist.Fill(kinter);
            }
          }

        }
      }
    }

    times.push_back(duration_cast<microseconds>(system_clock::now() - t0));
  }

  TFile outfile("main_output.root", "RECREATE");
  for (auto& hist : allHists) {
    hist.Write();
  }
  outfile.Close();


  auto const elapsed_time =
    duration_cast<milliseconds>(system_clock::now() - start_time);
  auto const sum_times = accumulate(begin(times), end(times), microseconds(0));

  cout << "Processed " << times.size() << " events in an average of "
       << sum_times.count() / times.size() << " microseconds/event\n";
  cout << "Total processing time (including file opening, but not macro "
          "compilation) was "
       << elapsed_time.count() << " milliseconds\n";

  return 0;
}
