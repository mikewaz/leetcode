//
// Created by Mark
// Problem 150
// Ref https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii
//

#include "Solution80.h"

namespace Sol80 {
    int Solution80::removeDuplicates(std::vector<int>& nums) {
        auto i = 0;

        for (auto num : nums)
        {
            if (i == 0 || i == 1 || nums[i - 2] != num)
            {
                nums[i] = num;
                i++;
            }
        }

        return i;
    }
}