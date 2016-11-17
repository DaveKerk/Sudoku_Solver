cmake_minimum_required(VERSION 3.6)
project(Sudoku_Solver_Real)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Grid.cpp Grid.h)
add_executable(Sudoku_Solver_Real ${SOURCE_FILES})