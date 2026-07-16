//
// Created by marks on 26.01.2026.
// https://leetcode.com/problems/count-good-nodes-in-binary-tree
//

#include "solutions/TreeNode.h"

namespace medium {
    class S1448 {
    public:
        int goodNodes(TreeNode *root) {
            helper(root, root->val);
            return count;
        }

    private:
        int count = 0;

        void helper(TreeNode *root, int val) {
            if (!root)
                return;

            if (root->val >= val) {
                val = root->val;
                count++;;
            }
            helper(root->left, val);
            helper(root->right, val);
        }
    };
}

