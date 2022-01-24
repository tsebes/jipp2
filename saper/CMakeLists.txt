cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

add_executable(saper src/main.cpp src/pole.cpp src/inne.cpp src/bomba.cpp src/wyniki.cpp src/wygrana.cpp src/porazka.cpp)

include_directories(include)