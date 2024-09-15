cmake_minimum_required(VERSION 3.29)
# 'Google_test' is the subproject name
project(Google_tests)

# Подключаем Google Test из папки lib
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Добавляем исполняемый файл с тестами
add_executable(Google_Tests_run test1.cpp
        ../Calculator.h
        ../Calculator.cpp)

# Линкуем с библиотеками Google Test
target_link_libraries(Google_Tests_run gtest gtest_main)