cmake_minimum_required(VERSION 3.16)

project(Class)

set(CMAKE_CXX_STANDARD 17)

add_executable(class src/main.cpp src/Firstclass.cpp src/Firstclass.h)

include_directories(include)