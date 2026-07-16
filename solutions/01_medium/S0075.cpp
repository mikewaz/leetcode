//
// Created by marks on 16.07.2026.
// https://leetcode.com/problems/sort-colors/
//

#include <vector>

namespace medium {
    class S75 {
    public:
        static void sortColors(std::vector<int>& nums) {
            int low = 0, mid = 0, high = nums.size() - 1;
            while (mid <= high) {
                if (nums[mid] == 0) {
                    std::swap(nums[low], nums[mid]);
                    low++;
                    mid++;
                }
                else if (nums[mid] == 1) {
                    mid++;
                }
                else {
                    std::swap(nums[mid], nums[high]);
                    high--;
                }
            }
        }
    };
}