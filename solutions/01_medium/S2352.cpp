//
// Created by marks on 26.12.2025.
// https://leetcode.com/problems/equal-row-and-column-pairs
//

#include <vector>
#include <map>

namespace medium {
    class S2352 {
    public:
        static int equalPairs(std::vector<std::vector<int>>& grid) {
            const auto size = grid.size();
            std::map<std::vector<int>, int> map;
            auto result = 0;

            for (const auto& vector : grid) {
                map[vector]++;
            }

            for (auto i = 0; i < size; i++) {
                std::vector<int> col(size);
                for (auto j = 0; j < size; j++) {
                    col[j] = grid[j][i];
                }

                result += map[col];
            }

            return result;
        }
    };
}