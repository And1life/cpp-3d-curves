cmake_minimum_required(VERSION 3.10)
project(CppCurvesLibrary)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(curves_lib STATIC
    curves_lib/src/Circle.cpp
    curves_lib/src/Ellipse.cpp
    curves_lib/src/Helix.cpp
)

target_include_directories(curves_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/curves_lib/include
)

add_executable(curves_app app/main.cpp)

target_link_libraries(curves_app curves_lib)