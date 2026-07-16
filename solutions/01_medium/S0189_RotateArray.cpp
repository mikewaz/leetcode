//
// Created by marks on 13.10.2025.
// https://leetcode.com/problems/rotate-array/
//

#include <vector>

namespace medium {
    class S189_RotateArray {
    public:
        static void rotate(std::vector<int>& nums, int k) {
            k %= nums.size();
            auto l = 0;
            auto r = k + 1;

            for (auto i = 0; i < nums.size() - 1; i++) {
                if (i < k) {
                    const auto temp = nums[l];
                    nums[l] = nums[r];
                    nums[r] = temp;
                    l++;
                    if (l >= nums.size()) {
                        l = 0;
                    }
                    r++;
                    if (r >= nums.size()) {
                        r = 0;
                    }
                }
                else {
                    const auto temp = nums[i];
                    nums[i] = nums[i + 1];
                    nums[i + 1] = temp;
                }
            }
        }
    };
}