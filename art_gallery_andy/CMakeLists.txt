cmake_minimum_required(VERSION 3.6)
project(art_gallery_prototype CXX)

include_directories($ENV{BOOST_INC})
include_directories($ENV{CANVAS_INC})
include_directories($ENV{CETLIB_EXCEPT_INC})
include_directories($ENV{CETLIB_INC})
include_directories($ENV{FHICLCPP_INC})
include_directories($ENV{GALLERY_INC})
include_directories($ENV{ROOT_INC})
include_directories($ENV{CANVAS_ROOT_IO_INC})
include_directories($ENV{MUSE_WORK_DIR}/backing)
include_directories($ENV{BTRK_DIR}/include)
include_directories($ENV{CLHEP_INCLUDE_DIR})
include_directories($ENV{ART_INC})
include_directories($ENV{KINKAL_INC})
include_directories($ENV{NLOHMANN_JSON_INC})
link_directories($ENV{ROOTSYS}/lib $ENV{CANVAS_LIB} $ENV{CETLIB_EXCEPT_LIB} $ENV{CETLIB_LIB} $ENV{GALLERY_LIB} $ENV{CANVAS_ROOT_IO_LIB} $ENV{BTRK_LIB} $ENV{CLHEP_LIB_DIR} $ENV{ART_LIB} $ENV{KINKAL_LIB} $ENV{NLOHMANN_JSON_INC})

add_executable(art_gallery_prototype art_gallery_prototype_main.cc)

# To set the C++ standard to be used, only one of the following two lines should
# be un-commented.
#set_property(TARGET art_gallery_prototype PROPERTY CXX_STANDARD 14)
#set_property(TARGET art_gallery_prototype PROPERTY CXX_STANDARD 17)

target_link_libraries(art_gallery_prototype Core RIO Net Hist Graf Graf3d Gpad Tree Rint Postscript Matrix Physics MathCore Thread MultiProc pthread canvas cetlib_except cetlib gallery)
