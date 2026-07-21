//
// Created by marks on 21.07.2026.
// https://leetcode.com/problems/robot-bounded-in-circle/
//

#include <string>

namespace medium {
    class S1041 {
    public:
        bool isRobotBounded(std::string instructions) {
            char current_dir = 'N';
            int x = 0, y = 0;

            for (int i = 0; i < instructions.length(); i++) {
                if (instructions[i] == 'G') {
                    switch (current_dir) {
                        case 'N':
                            y += 1;
                            break;
                        case 'S':
                            y -= 1;
                            break;
                        case 'E':
                            x += 1;
                            break;
                        case 'W':
                            x -= 1;
                            break;
                    }
                }
                else {
                    char incoming = instructions[i];

                    switch (current_dir) {
                        case 'N':
                            current_dir = incoming == 'L' ? 'W' : 'E';
                            break;
                        case 'W':
                            current_dir = incoming == 'L' ? 'S' : 'N';
                            break;
                        case 'S':
                            current_dir = incoming == 'L' ? 'E' : 'W';
                            break;
                        case 'E':
                            current_dir = incoming == 'L' ? 'N' : 'S';
                            break;
                    }
                }
            }

            return x == 0 && y == 0 || current_dir != 'N';
        }
    };
}