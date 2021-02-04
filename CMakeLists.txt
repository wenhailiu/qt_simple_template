cmake_minimum_required(VERSION 3.8)
project(qt_simple_template)

set(CMAKE_CXX_STANDARD 11)

#Qt5: 
# set(Qt5_DIR C:/Qt/Qt5.12.7/5.12.7/msvc2015_64/lib/cmake/Qt5)
find_package(Qt5 COMPONENTS Core Widgets Xml OpenGL Network REQUIRED)
include_directories(${QT_INCLUDES})
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_executable(
    Application
    main.cpp
    mainWindow.cpp
)

target_link_libraries(
    Application
    Qt5::Core
    Qt5::Widgets 
    Qt5::OpenGL
    Qt5::Network
)