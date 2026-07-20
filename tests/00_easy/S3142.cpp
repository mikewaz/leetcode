//
// Created by marks on 20.07.2026.
//

#include <gtest/gtest.h>
#include "solutions/00_easy/S3142.cpp"

TEST(S3142, satisfiesConditions){
    easy::S3142 s;
    std::vector<std::vector<int>> nums {{1,0,2}, {2,1,3}};
    s.satisfiesConditions(nums);
}