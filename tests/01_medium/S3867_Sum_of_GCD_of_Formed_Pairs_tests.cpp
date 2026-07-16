//
// Created by marks on 16.07.2026.
//

#include <gtest/gtest.h>
#include "solutions/01_medium/S3867_Sum_of_GCD_of_Formed_Pairs.cpp"

TEST(S3867, gcdSum){
    std::vector<int> nums { 2,6,4 };
    auto actual = medium::S3867::gcdSum(nums);
    EXPECT_EQ(actual, 2);
}