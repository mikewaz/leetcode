//
// Created by marks on 17.11.2025.
//

#ifndef LEETCODE_S1437_CHECK_IF_ALL_H
#define LEETCODE_S1437_CHECK_IF_ALL_H
#include <vector>

// https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away
class S1437_Check_If_All {
public:
    bool kLengthApart(std::vector<int> &nums, int k) {
        int c = k;

        for(const auto& num : nums)
        {
            if (num == 1)
            {
                if (c < k)
                    return false;

                c = 0;
            }
            else
            {
                c++;
            }
        }

        return true;
    }
};


#endif //LEETCODE_S1437_CHECK_IF_ALL_H