//
// Created by marks on 16.07.2026.
// https://leetcode.com/problems/sum-of-gcd-of-formed-pairs
//

#include <vector>
#include <array>
#include <numeric>
#include <algorithm>

namespace medium {
    class S3867 {
    public:
        static long long gcdSum(std::vector<int>& nums) {
            auto maxi = 0;

            for (int i = 0; i < nums.size(); ++i) {
                maxi = std::max(maxi, nums[i]);
                nums[i] = std::gcd(nums[i], maxi);;
            }

            std::sort(nums.begin(), nums.end());
            auto l = nums.begin();
            auto r = nums.end() - 1;
            long long result = 0;
            while (l < r){
                result += std::gcd(*l, *r);
                ++l;
                --r;
            }

            return result;
        }
    };
}