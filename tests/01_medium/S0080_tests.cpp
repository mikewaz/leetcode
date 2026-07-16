//
// Created by marks on 16.07.2026.
// https://leetcode.com/problems/linked-list-cycle-ii/
//

#include <gtest/gtest.h>
#include <vector>
#include "solutions/01_medium/S0080.cpp"

TEST(Sol80, removeDuplicates) {
    std::vector<int> nums = {1, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4};
    auto actual = medium::S80::removeDuplicates(nums);

    EXPECT_EQ(actual, 8);
}