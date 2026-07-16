//
// Created by marks on 12.10.2025.
// https://leetcode.com/problems/maximum-total-damage-with-spell-casting/
//

#include <algorithm>
#include <vector>
#include <deque>

namespace medium {
    class S3186 {
    public:
        static long long maximumTotalDamage(std::vector<int>& power) {
            sort(power.begin(), power.end());
            std::deque<long long> incl;
            std::deque<long long> excl;
            long long currentPower = -1;
            for (long long i = 0; i < power.size(); i++) {
                if (power[i] - 1 != currentPower) {
                    for (int x = 0; x < 5; x++) {
                        if (currentPower < power[i] - 1) {
                            currentPower += 1;

                            long long newIncl = 0;
                            long long newExcl = 0;
                            if (currentPower >= 3) {
                                newIncl = std::max(incl.front(), excl.front());
                            }
                            if (currentPower >= 1) {
                                newExcl = std::max(incl.back(), excl.back());
                            }

                            if (incl.size() >= 3) {
                                incl.pop_front();
                                excl.pop_front();
                            }
                            incl.push_back(newIncl);
                            excl.push_back(newExcl);
                        }
                    }
                    currentPower = power[i] - 1;
                }
                incl.back() += currentPower + 1;
            }
            return std::max(incl.back(), excl.back());
        }
    };
}