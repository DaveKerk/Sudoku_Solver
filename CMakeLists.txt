cmake_minimum_required(VERSION 3.6)
project(My_Guessing_Game__CLion_Comp__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(My_Guessing_Game__CLion_Comp__ ${SOURCE_FILES})