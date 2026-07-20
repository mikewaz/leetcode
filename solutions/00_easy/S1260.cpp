//
// Created by marks on 20.07.2026.
// https://leetcode.com/problems/shift-2d-grid/description
//

#include <vector>

namespace easy {
    class S1260 {
    public:
        std::vector<std::vector<int>> shiftGrid(std::vector<std::vector<int>>& grid, int k) {
            int rows = grid.size(), cols = grid[0].size();
            int n = rows * cols;

            k = k % n;
            if (!k)
                return grid;

            auto swap = [&](int i, int j) __attribute__((always_inline)) {
                while (i < j) {
                    std::swap(grid[i / cols][i % cols], grid[j / cols][j % cols]);
                    i++;
                    j--;
                }
            };

            swap(0, n - 1);
            swap(0, k - 1);
            swap(k, n - 1);

            return grid;
        }
    };
}