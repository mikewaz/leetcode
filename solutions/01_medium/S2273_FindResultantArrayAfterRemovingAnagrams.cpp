//
// Created by marks on 13.10.2025.
// https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/
//

#include <string>
#include <vector>
#include <unordered_map>

namespace medium {
    class S2273 {
    public:
        static std::vector<std::string> removeAnagrams(std::vector<std::string>& words) {
            int index = 0;
            std::vector<std::string> result;

            for (int i = 1; i < words.size(); i++) {
                if (isAnagram(words[index], words[i])) {
                    words[i] = "1";
                }
                else {
                    index = i;
                }
            }

            for (const auto & i : words){
                if (i != "1")
                    result.push_back(i);
            }
            return result;
        }

    private:
        static bool isAnagram(const std::string& str1, const std::string& str2) {
            if (str1.length() != str2.length())
                return false;

            std::unordered_map<char, int> chars1;
            std::unordered_map<char, int> chars2;

            for (auto i = 0; i < str1.length(); i++) {
                chars1[str1[i]]++;
                chars2[str2[i]]++;
            }

            for (const auto& [key, value] : chars1) {
                if (chars2[key] != value)
                    return false;
            }

            return true;
        }
    };
}