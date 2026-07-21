//
// Created by marks on 21.07.2026.
//

#include <gtest/gtest.h>
#include "solutions/00_easy/S0733.cpp"


TEST(S733, floodFill) {
    easy::S733 s;
    std::vector<std::vector<int>> image{{1, 1, 1},
                                        {1, 1, 0},
                                        {1, 0, 1}};

    s.floodFill(image, 1, 1, 2);

    std::vector<std::vector<int>> expected{{2, 2, 2},
                                           {2, 2, 0},
                                           {2, 0, 1}};
    EXPECT_EQ(expected, image);
}