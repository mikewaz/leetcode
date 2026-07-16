//
// Created by marks on 16.07.2026.
// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
//

#include <vector>

namespace medium {
    class S80 {
    public:
        static int removeDuplicates(std::vector<int> &nums) {
            auto result = 2;

            if (nums.size() <= 2)
                return nums.size();

            for (int i = 2; i < nums.size(); i++) {
                if (nums[i] != nums[result - 2]) {

                    nums[result] = nums[i];
                    result++;
                }
            }

            return result;
        }
    };
}