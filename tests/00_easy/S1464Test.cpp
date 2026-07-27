//
// Created by marks on 27.07.2026.
//

#include <gtest/gtest.h>
#include "solutions/00_easy/S1464.cpp"

TEST(S1464, maxProduct) {
    std::vector<int> nums {3,4,5,2};
    easy::S1464 s;
    auto actual = s.maxProduct(nums);
    EXPECT_EQ(actual, 12);
}