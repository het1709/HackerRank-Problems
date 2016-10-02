cmake_minimum_required(VERSION 3.6)
project(2DArray_Hourglass)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(2DArray_Hourglass ${SOURCE_FILES})