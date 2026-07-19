//
// Created by marks on 19.07.2026.
// https://leetcode.com/problems/remove-duplicate-letters/
//

#include <string>
#include <vector>

namespace medium {
    class S316 {
    public:
        std::string removeDuplicateLetters(std::string s) {
            std::vector<int> vis(26), num(26);

            for (char ch : s) {
                num[ch - 'a']++;
            }

            std::string stk;

            for (char ch : s) {
                if (!vis[ch - 'a']) {
                    while (!stk.empty() && stk.back() > ch) {
                        if (num[stk.back() - 'a'] > 0) {
                            vis[stk.back() - 'a'] = 0;
                            stk.pop_back();
                        } else {
                            break;
                        }
                    }
                    vis[ch - 'a'] = 1;
                    stk.push_back(ch);
                }
                num[ch - 'a'] -= 1;
            }

            return stk;
        }
    };
}