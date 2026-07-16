//
// Created by marks on 14.07.2026.
//

#ifndef LEETCODE_S0036_VALID_SUDOKU_H
#define LEETCODE_S0036_VALID_SUDOKU_H
#include <unordered_set>
#include <vector>

class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        std::unordered_set<char> rows[9];
        std::unordered_set<char> cols[9];
        std::unordered_set<char> boxes[9];

        for (auto r = 0; r < 9; ++r) {
            for (auto c = 0; c < 9; ++c) {
                if (board[r][c] == '.') {
                    continue;
                }

                auto value = board[r][c];
                const auto boxIndex = r / 3 * 3 + c / 3;

                if (rows[r].contains(value) || cols[c].contains(value) || boxes[boxIndex].contains(value)) {
                    return false;
                }

                rows[r].insert(value);
                cols[c].insert(value);
                boxes[boxIndex].insert(value);
            }
        }

        return true;
    }
};

#endif //LEETCODE_S0036_VALID_SUDOKU_H