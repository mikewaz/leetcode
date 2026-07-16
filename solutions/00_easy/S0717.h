//
// Created by marks on 19.11.2025.
//

#ifndef LEETCODE_S0717_H
#define LEETCODE_S0717_H
#include <vector>


class S0717 {
public:
    bool isOneBitCharacter(std::vector<int>& bits) {
        const int n = bits.size();
        int i = 0;

        while (i < n - 1) {
            i += bits[i] + 1;
        }

        return i == n - 1;
    }
};


#endif //LEETCODE_S0717_H