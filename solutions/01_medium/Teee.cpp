//
// Created by marks on 09.04.2026.
//


#include <string>

namespace medium {
    class Teee {
    public:
        static std::string removeDuplicates(std::string str) {
            if (str.empty())
                return str;

            std::string result;
            result.push_back(str[0]);

            for (size_t i = 1;  i < str.size(); i++) {
                if (str[i] != result.back())
                    result.push_back(str[i]);
            }

            return result;
        }
    };
}

