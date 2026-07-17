//
// Created by marks on 17.07.2026.
// https://leetcode.com/problems/sorted-gcd-pair-queries/description
//

#include <vector>
#include <numeric>
#include <algorithm>
#include <tuple>

namespace hard {
    class S3312 {
    public:
        std::vector<int> gcdValues(std::vector<int> &nums, std::vector<long long> &queries) {
            const int maxValue = *std::max_element(nums.begin(), nums.end());

            std::vector<int> frequency(maxValue + 1, 0);

            for (int value : nums) {
                ++frequency[value];
            }

            std::vector<long long> exactGcdPairs(maxValue + 1, 0);

            for (int g = maxValue; g >= 1; --g) {
                long long divisibleCount = 0;

                for (int multiple = g; multiple <= maxValue; multiple += g) {
                    divisibleCount += frequency[multiple];
                }

                long long pairCount = divisibleCount * (divisibleCount - 1) / 2;

                for (int multiple = 2 * g; multiple <= maxValue; multiple += g) {
                    pairCount -= exactGcdPairs[multiple];
                }

                exactGcdPairs[g] = pairCount;
            }

            std::vector<long long> prefix(maxValue + 1, 0);

            for (int g = 1; g <= maxValue; ++g) {
                prefix[g] = prefix[g - 1] + exactGcdPairs[g];
            }

            std::vector<int> answer;
            answer.reserve(queries.size());

            for (long long query : queries) {
                auto it = std::upper_bound(prefix.begin(),prefix.end(),query);

                answer.push_back(static_cast<int>(it - prefix.begin()));
            }

            return answer;
        }
    };
}