//
// Created by marks on 16.07.2026.
// https://leetcode.com/problems/sequential-digits/description
//

#include <vector>
#include <algorithm>

namespace medium {
    class S1291 {
    public:
        std::vector<int> sequentialDigits(int low, int high) {
            auto l = std::lower_bound(all.begin(), all.end(), low);
            auto r = std::upper_bound(all.begin(), all.end(), high);

            return {l, r};
        }
    private:
        std::vector<int> all { 12, 23, 34, 45, 56, 67, 78, 89,
                               123, 234, 345, 456, 567, 678, 789,
                               1234, 2345, 3456, 4567, 5678, 6789,
                               12345, 23456, 34567, 45678, 56789,
                               123456, 234567, 345678, 456789,
                               1234567, 2345678, 3456789,
                               12345678, 23456789,
                               123456789 };
    };


}