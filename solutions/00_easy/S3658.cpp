//
// Created by marks on 15.07.2026.
// https://leetcode.com/problems/gcd-of-odd-and-even-sums
//

#include <numeric>

class S3658 {
public:
    static int gcdOfOddEvenSums(int n) {
        int even = n * n, odd = n * (n + 1);
        return std::gcd(even, odd);
    }
};