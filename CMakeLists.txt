cmake_minimum_required(VERSION 3.16)
cmake_policy(SET CMP0135 NEW)
project(LeetCode)

set(CMAKE_CXX_STANDARD 20)

# GoogleTest
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

# Для MSVC: не форсить /MD на gtest
if(MSVC)
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
endif()

FetchContent_MakeAvailable(googletest)

# Рекурсивно находим все исходные файлы (.cpp) и заголовки (.h)
file(GLOB_RECURSE LEETCODE_SOURCES
        "solutions/*.cpp"
        "solutions/*.h"
)

# Создаем библиотеку, используя найденный список файлов
add_library(LeetCode SHARED ${LEETCODE_SOURCES})

# Make headers available to dependents
target_include_directories(LeetCode PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# --- Tests ---
enable_testing()

# Рекурсивно находим все исходные файлы (.cpp) и заголовки (.h)
file(GLOB_RECURSE LEETCODE_TESTS
        "tests/*.cpp"
)

# Создаем библиотеку, используя найденный список файлов
add_executable(LeetCode_tests ${LEETCODE_TESTS})

target_link_libraries(LeetCode_tests PRIVATE LeetCode GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(LeetCode_tests)
