//
// Created by Марк Саушкин
// Solution Sol0000s/Sol000s/Sol80s/Sol80/Solution80.cpp
// Ref  https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii
//
#include <gtest/gtest.h>
#include <vector>
#include "../../../../Sol0000s/Sol000s/Sol80s/Sol80/Solution80.h"

TEST(Sol80, removeDuplicates) {
    // Создаем объект класса Calculator
    Sol80::Solution80 sol;
    std::vector<int> nums = {1, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4};

    // Проверяем работу метода Sum
    EXPECT_EQ(sol.removeDuplicates(nums), 8);
}