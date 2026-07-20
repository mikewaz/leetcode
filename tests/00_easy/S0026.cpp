//
// Created by marks on 20.07.2026.
//

#include <gtest/gtest.h>
#include "solutions/00_easy/S0026.cpp"

TEST(S26, removeDuplicates){
    std::vector<int> expected{0,1,2,3,4,2,2,3,3,4};
    std::vector<int> nums    {0,0,1,1,1,2,2,3,3,4};
    easy::S26 solution;
    auto actual = solution.removeDuplicates(nums);

    EXPECT_EQ(actual, 5);
    EXPECT_EQ(expected, nums);
}