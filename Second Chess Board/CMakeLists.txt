cmake_minimum_required(VERSION 3.6)
project(Second_Chess_Board)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Second_Chess_Board ${SOURCE_FILES})