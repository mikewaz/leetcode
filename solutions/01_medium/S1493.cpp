//
// Created by marks on 26.12.2025.
// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/
//

#include <vector>

namespace medium {
    class S1493 {
    public:
        static int longestSubarray(std::vector<int>& nums) {
            const int n = nums.size();
            auto result = 0;
            auto lPointer = 0;
            auto zeros = 0;

            for (int rPointer = 0; rPointer < n; rPointer++) {
                if (nums[rPointer] == 0) {
                    zeros++;
                }
                while (zeros > 1) {
                    if (nums[lPointer] == 0) {
                        zeros--;
                    }
                    lPointer++;
                }
                result = std::max(result, rPointer - lPointer + 1 - zeros);
            }
            return (result == n) ? result - 1 : result;
        }
    };
}