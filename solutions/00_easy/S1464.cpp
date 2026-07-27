//
// Created by marks on 27.07.2026.
// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
//

#include <vector>

namespace easy {
    class S1464 {
    public:
        int maxProduct(std::vector<int> &nums) {
            int l = 0, r = 0;

            for (const auto &item: nums) {
                if (item > l) {
                    r = l;
                    l = item;
                }
                else if (item > r) {
                    r = item;
                }
            }

            return (l - 1) * (r - 1);
        }
    };
}
