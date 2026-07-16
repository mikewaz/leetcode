//
// Created by marks on 26.01.2026.
//

#ifndef LEETCODE_TREENODE_H
#define LEETCODE_TREENODE_H


class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


#endif //LEETCODE_TREENODE_H