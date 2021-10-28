cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

add_executable(matrixApp src/main.cpp)

add_library(matrixLib src/lib.cpp include/matrixLib/lib.h)