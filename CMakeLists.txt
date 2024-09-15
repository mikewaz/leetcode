cmake_minimum_required(VERSION 3.29)
project(LeetCode_C__)

set(CMAKE_CXX_STANDARD 17)

add_executable(LeetCode_C__ main.cpp
        Calculator.cpp
        Calculator.h)

add_subdirectory(Google_tests)