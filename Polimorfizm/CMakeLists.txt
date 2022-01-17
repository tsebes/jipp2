cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

add_executable(polimorfizm src/main.cpp include/figure.cpp)

include_directories(include)