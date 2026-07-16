//
// Created by marks on 16.07.2026.
//

#include <gtest/gtest.h>
#include "solutions/01_medium/S0075.cpp"

TEST(S75, sortColors) {
    std::vector<int> nums { 2, 0, 2, 1, 1, 0 };
    medium::S75::sortColors(nums);

    std::vector<int> expected { 0, 0, 1, 1, 2, 2 };
    EXPECT_EQ(nums, expected);
}