//
// Created by marks on 17.11.2025.
// https://leetcode.com/problems/jump-game-ii/
//

#include <vector>

namespace medium {
    class S45 {
    public:
        int S45_jump(std::vector<int> &nums) {
            int l = 0, r = 0, steps = 0;

            while (r < nums.size() - 1) {
                int farthest = 0;

                for (int i = l; i <= r; i++) {
                    if (farthest < i + nums[i])
                        farthest = i + nums[i];
                }

                l = r + 1;
                r = farthest;
                steps++;
            }

            return steps;
        }
    };
}