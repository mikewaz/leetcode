//
// Created by marks on 16.07.2026.
//

#include <gtest/gtest.h>
#include "solutions/01_medium/S1291.cpp"

TEST(S1291, sequentialDigits) {
    medium::S1291 s;
    auto actual = s.sequentialDigits(100, 300);
    std::vector<int> expected {123, 234};
    EXPECT_EQ(actual, expected);
}