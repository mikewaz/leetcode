//
// Created by marks on 28.12.2025.
// https://leetcode.com/problems/decode-string
//

#include <string>
#include <stack>

namespace medium {
    class S394 {
    public:
        std::string decodeString(std::string s) {
            std::stack<int> dStack;
            std::stack<std::string> strStack;
            std::string result;
            int n = 0;

            for (const char c : s) {
                if (isdigit(c)) {
                    n = n * 10 + (c - '0');
                }
                else if (c == '[') {
                    dStack.push(n);
                    n = 0;
                    strStack.push(result);
                    result = "";
                }
                else if (c == ']') {
                    int k = dStack.top();
                    dStack.pop();
                    std::string temp = result;
                    result = strStack.top();
                    strStack.pop();

                    while (k-- > 0) {
                        result += temp;
                    }
                }
                else {
                    result += c;
                }
            }

            return result;
        }
    };
}