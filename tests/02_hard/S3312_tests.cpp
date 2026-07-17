//
// Created by marks on 17.07.2026.
// https://leetcode.com/problems/sorted-gcd-pair-queries/description
//

#include <gtest/gtest.h>
#include "solutions/02_hard/S3312.cpp"

TEST(S3312, gcdValues) {
    hard::S3312 s;
    std::vector<int> nums{2,3,4};
    std::vector<long long> queries{0, 2, 2};
    auto result = s.gcdValues(nums, queries);
    std::vector<int> expected {1, 2, 2};
    EXPECT_EQ(result, expected);
}