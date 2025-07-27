cmake_minimum_required(VERSION 3.28)
project(SUMAPP)
add_executable(sumbinary main.cpp src/calc.cpp)
target_include_directories(sumbinary PUBLIC include/)