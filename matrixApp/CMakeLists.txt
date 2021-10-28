cmake_minimum_required(VERSION 3.16)

project(matrixApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(matrixApp main.cpp)

add_library(matrixLib matrixLib/lib.cpp matrixLib/lib.h)