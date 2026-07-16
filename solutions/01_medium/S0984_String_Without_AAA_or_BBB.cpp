//
// Created by marks on 09.04.2026.
// https://leetcode.com/problems/string-without-aaa-or-bbb/
//

#include <string>

namespace medium {
    class S984_String_Without_AAA_or_BBB {
    public:
        static std::string strWithout3a3b(int a, int b){
            std::string result = "";

            while (a and b) {
                if (a > b)
                    result += "aab", a--;
                else if (b > a)
                    result += "bba", b--;
                else
                    result += "ab";

                a--;
                b--;
            }

            while (a) {
                result += 'a', a--;
            }

            while (b) {
                result += 'b', b--;
            }

            return result;
        }
    };
}