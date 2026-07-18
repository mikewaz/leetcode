//
// Created by marks on 18.07.2026.
// https://leetcode.com/problems/find-greatest-common-divisor-of-array
//

#include <vector>
#include <numeric>

namespace easy{
    class S1979 {
    public:
        int findGCD(std::vector<int>& nums) {
            int smallest = 1000, largest = 0;
            for (const auto &item: nums) {
                if (item < smallest) {
                    smallest = item;
                }
                if (item > largest) {
                    largest = item;
                }
            }

            return std::gcd(smallest, largest);
        }
    };
}