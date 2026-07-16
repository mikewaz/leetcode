//
// Created by marks on 26.01.2026.
//

#include "S0104.h"

#include <queue>

int S0104::maxDepth(TreeNode* root) {
    if (!root)
        return 0;

    std::queue<TreeNode*> queue;
    auto result = 0;
    queue.push(root);

    while (!queue.empty()) {
        ++result;
        const auto size = queue.size();

        for (auto i = 0; i < size; ++i) {
            const auto node = queue.front();
            queue.pop();

            if (node->left)
                queue.push(node->left);

            if (node->right)
                queue.push(node->right);
        }
    }

    return result;
}
