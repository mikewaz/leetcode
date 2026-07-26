//
// Created by marks on 26.07.2026.
// https://leetcode.com/problems/ugly-number/description/
//

namespace easy {
    class S263 {
    public:
        bool isUgly(int n) {
            if (n <= 0)
                return false;

            for (auto a: {2, 3, 5}) {
                while (n % a == 0)
                    n /= a;
            }

            return n == 1;
        }
    };
}