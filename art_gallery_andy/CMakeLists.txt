cmake_minimum_required(VERSION 3.6)
project(art_gallery_prototype CXX)

include_directories($ENV{BOOST_INC})
include_directories($ENV{CANVAS_INC})
include_directories($ENV{CETLIB_EXCEPT_INC})
include_directories($ENV{CETLIB_INC})
include_directories($ENV{FHICLCPP_INC})
include_directories($ENV{GALLERY_INC})
include_directories($ENV{ROOT_INC})
include_directories($ENV{ROOT_INC}/root)
include_directories($ENV{CANVAS_ROOT_IO_INC})
include_directories($ENV{MUSE_WORK_DIR}/backing)
include_directories($ENV{BTRK_DIR}/include)
include_directories($ENV{CLHEP_INCLUDE_DIR})
include_directories($ENV{ART_INC})
include_directories($ENV{KINKAL_INC})
include_directories($ENV{NLOHMANN_JSON_INC})

if("$ENV{MUSE_FLAVOR}" MATCHES "sl7")
    link_directories($ENV{ROOTSYS}/lib/ $ENV{CANVAS_LIB} $ENV{CETLIB_EXCEPT_LIB} $ENV{CETLIB_LIB} $ENV{GALLERY_LIB} $ENV{CANVAS_ROOT_IO_LIB} $ENV{BTRK_LIB} $ENV{CLHEP_LIB_DIR} $ENV{ART_LIB} $ENV{KINKAL_LIB} $ENV{NLOHMANN_JSON_INC})
elseif("$ENV{MUSE_FLAVOR}" MATCHES "al9")
    link_directories($ENV{ROOTSYS}/lib/root/ $ENV{ROOTSYS}/lib $ENV{ROOTSYS}/lib64 $ENV{MUSE_WORK_DIR}/backing/build/al9-prof-e28-p056/Offline/lib/)
else()
    message(FATALERROR "$MUSE_FLAVOR not set. Did you forget muse setup?")
endif()

add_executable(art_gallery_prototype art_gallery_prototype_main.cc)

if("$ENV{MUSE_FLAVOR}" MATCHES "sl7")
    target_link_libraries(art_gallery_prototype Core RIO Net Hist Graf Graf3d Gpad Tree Rint Postscript Matrix Physics MathCore Thread MultiProc pthread canvas cetlib_except cetlib gallery)
elseif("$ENV{MUSE_FLAVOR}" MATCHES "al9")
    target_link_libraries(art_gallery_prototype Core RIO Net Hist Graf Graf3d Gpad Tree Rint Postscript Matrix Physics MathCore Thread MultiProc pthread canvas cetlib_except cetlib gallery art_Framework_Core art_Persistency_Common art_Persistency_Provenance art_Framework_Art canvas_root_io_Dictionaries_canvas_Common_dict canvas_root_io_Dictionaries_canvas_Provenance_dict canvas_root_io_Dictionaries_clhep_dict canvas_root_io_Dictionaries_cetlib_dict canvas_root_io_Dictionaries_fhiclcpp_dict mu2e_MCDataProducts mu2e_MCDataProducts_dict mu2e_RecoDataProducts mu2e_RecoDataProducts_dict mu2e_DataProducts mu2e_DataProducts_dict)
else()
    message(FATALERROR "$MUSE_FLAVOR not set. Did you forget muse setup?")
endif()


# To set the C++ standard to be used, only one of the following two lines should
# be un-commented.
#set_property(TARGET art_gallery_prototype PROPERTY CXX_STANDARD 14)
#set_property(TARGET art_gallery_prototype PROPERTY CXX_STANDARD 17)
