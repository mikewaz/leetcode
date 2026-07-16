//
// Created by marks on 26.01.2026.
//

#include "S0872.h"

#include <iostream>
#include <queue>
#include <stack>

bool S0872::leafSimilar(TreeNode* root1, TreeNode* root2) {
    std::stack<TreeNode*> stack1, stack2;
    std::vector<int> vec1, vec2;
    stack1.push(root1);
    stack2.push(root2);

    while (!stack1.empty()) {
        auto node1 = stack1.top();
        stack1.pop();

        if (node1->right)
            stack1.push(node1->right);

        if (node1->left)
            stack1.push(node1->left);

        if (node1->left == nullptr && node1->right == nullptr)
            vec1.push_back(node1->val);
    }

    while (!stack2.empty()) {
        auto node = stack2.top();
        stack2.pop();

        if (node->right)
            stack2.push(node->right);

        if (node->left)
            stack2.push(node->left);

        if (node->left == nullptr && node->right == nullptr)
            vec2.push_back(node->val);
    }

    return vec1 == vec2;
}
