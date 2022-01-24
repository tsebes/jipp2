cmake_minimum_required(VERSION 3.16)

add_executable(matrixTest src/main.cpp include/TimeMeasure.cpp)

target_include_directories(matrixTest PUBLIC include)

target_link_libraries(matrixTest pthread)