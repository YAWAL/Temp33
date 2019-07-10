cmake_minimum_required(VERSION 3.14)
project(WindowsProject1)

set(CMAKE_CXX_STANDARD 14)

add_executable(WindowsProject1 main.cpp)

target_link_libraries(WindowsProject1 Winmm.lib)
