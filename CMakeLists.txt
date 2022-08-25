cmake_minimum_required(VERSION 3.23)
project(cpp_starter)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(test)

add_executable(main main.cpp src/math.cpp)