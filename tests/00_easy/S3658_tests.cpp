#include <gtest/gtest.h>
#include "solutions/00_easy/S3658.cpp"

struct TestCase {
    int input;
    int expected;
};

class S3658ParamTest : public ::testing::TestWithParam<TestCase> {};

TEST_P(S3658ParamTest, gcdOfOddEvenSums) {
    const TestCase& param = GetParam();

    const auto result = S3658::gcdOfOddEvenSums(param.input);
    EXPECT_EQ(result, param.expected);
}

INSTANTIATE_TEST_SUITE_P(
        S3658Tests,
        S3658ParamTest,
        ::testing::Values(
                TestCase{4, 4},  // input = 4, expected = 4
                TestCase{5, 5}  // input = 5, expected = 1
        )
);