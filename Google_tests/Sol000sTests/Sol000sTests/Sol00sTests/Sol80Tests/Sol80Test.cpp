//
// Created by Марк Саушкин
// Ref  https://leetcode.com/problems/linked-list-cycle-ii/
//
#include <gtest/gtest.h>
#include <vector>
#include "../../../../Sol0000s/Sol000s/Sol80s/Sol80/Solution80.h"

TEST(Sol80, removeDuplicates) {
    Sol80::Solution80 sol;
    std::vector<int> nums = {1, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4};

    EXPECT_EQ(sol.removeDuplicates(nums), 8);
}