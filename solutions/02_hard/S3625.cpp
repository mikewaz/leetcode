//
// Created by marks on 16.07.2026.
// https://leetcode.com/problems/count-number-of-trapezoids-ii/
//

#include <map>
#include <unordered_map>
#include <numeric>
#include <string>
#include <vector>

namespace hard {
    class S3625 {
    public:
        int countTrapezoids(std::vector<std::vector<int>> &points) {
            int n = points.size();
            std::unordered_map<int, std::unordered_map<int, int>> m;
            std::unordered_map<int, std::unordered_map<int, std::map<int, int>>> m2;

            for (int i = 0; i < n; i++) {
                auto x0 = points[i][0], y0 = points[i][1];
                for (auto j = i + 1; j < n; j++) {
                    auto x1 = points[j][0], y1 = points[j][1];
                    auto a = y1 - y0, b = x0 - x1;
                    auto len = a * a + b * b;
                    auto c = 0;
                    if (a < 0) {
                        a = -a, b = -b;
                    }
                    if (a * b == 0) {
                        if (a == 0) {
                            b = 1;
                        } else {
                            a = 1;
                        }
                    } else {
                        int g = std::gcd(abs(a), abs(b));
                        a /= g, b /= g;
                    }
                    c = a * x0 + b * y0;

                    int hash = a * 40003 + b;
                    m[hash][c]++;
                    m2[hash][c][len]++;
                }

            }
            int total = 0;
            for (auto &[slope, counts]: m) {
                int prev = 0;
                for (auto &[c, count]: counts) {
                    total += count * prev;
                    prev += count;
                }
            }
            int sameCount = 0;
            // we need to substract count of parallelogram since they have been counted twice in the calculation above
            // the sufficient condition of  parallelogram is that it has two parallel sides with same length. we can use m2 to calculate counts
            for (auto &[slope, counts]: m2) {
                std::map<int, int> prev;
                for (auto &[c, countLen]: counts) {
                    for (auto &[len, count]: countLen) {
                        sameCount += count * prev[len];
                        prev[len] += count;
                    }

                }
            }
            return total - sameCount / 2;
        }
    };
}