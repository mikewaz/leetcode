#include <gtest/gtest.h>

#include "solutions/00_easy/S0700.h"
#include "solutions/TreeNode.h"

namespace {
    TreeNode* BuildSampleTree(std::vector<int>* line) {
        return nullptr;
    }

    void DeleteTree(TreeNode* root) {
        if (!root) {
            return;
        }
        DeleteTree(root->left);
        DeleteTree(root->right);
        delete root;
    } // namespace
}

TEST(S700, FindsExistingValue) {

    TreeNode* root = BuildSampleTree(nullptr);

    S0700 solver;
    TreeNode* found = solver.searchBST(root, 2);

    ASSERT_NE(found, nullptr);
    EXPECT_EQ(found->val, 2);
    EXPECT_EQ(found->left->val, 1);
    EXPECT_EQ(found->right->val, 3);

    DeleteTree(root);
}
