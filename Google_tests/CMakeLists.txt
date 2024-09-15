cmake_minimum_required(VERSION 3.29)
# 'Google_test' is the subproject name
project(Google_tests)

# Подключаем Google Test из папки lib
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Добавляем исполняемый файл с тестами
add_executable(Google_Tests_run test1.cpp
        ../Calculator.h
        ../Calculator.cpp
        ../Sol0000s/Sol000s/Sol80s/Sol80/Solution80.cpp
        ../Sol0000s/Sol000s/Sol80s/Sol80/Solution80.h
        Sol000sTests/Sol000sTests/Sol00sTests/Sol80Tests/Sol80Test.cpp
        ../Sol0000s/Sol100s/Sol140s/Sol142/Solution142.cpp
        ../Sol0000s/Sol100s/Sol140s/Sol142/Solution142.h
        ../Common/ListNode.cpp
        Sol000sTests/Sol100s/Sol140s/Sol142/Sol142Test.cpp)

# Линкуем с библиотеками Google Test
target_link_libraries(Google_Tests_run gtest gtest_main)