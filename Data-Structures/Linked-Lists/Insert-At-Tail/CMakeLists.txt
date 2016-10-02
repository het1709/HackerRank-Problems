cmake_minimum_required(VERSION 3.6)
project(Insert_At_Tail)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Insert_At_Tail ${SOURCE_FILES})