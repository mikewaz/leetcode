//
// Created by marks on 17.11.2025.
//

#ifndef LEETCODE_S1513_NUMBER_OF_SUBSTRINGS_WITH_ONLY_1S_H
#define LEETCODE_S1513_NUMBER_OF_SUBSTRINGS_WITH_ONLY_1S_H
#include <string>


class S1513_Number_of_Substrings_With_Only_1s {
public:
    const long long _MOD = 1e9 + 7;

    int numSub(std::string s) {
        auto result = 0LL, count = 0LL;

        for(char c: s) {
            if (c == '0')
                count = 0;
            else
                result += ++count;
        }

        return result % _MOD;
    }
};


#endif //LEETCODE_S1513_NUMBER_OF_SUBSTRINGS_WITH_ONLY_1S_H