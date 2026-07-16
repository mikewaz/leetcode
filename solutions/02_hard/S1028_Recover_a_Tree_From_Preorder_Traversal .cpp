//
// Created by marks on 16.07.2026.
// https://leetcode.com/problems/recover-a-tree-from-preorder-traversal
//

#include "solutions/TreeNode.h"
#include <string>
#include <iostream>
#include <stack>

namespace hard {
    class S1028 {
    public:
        static TreeNode *recoverFromPreorder(std::string traversal) {
            std::stack<TreeNode *> st;
            TreeNode *root = nullptr;

            int ln = 0;
            for (auto i = 0; i < traversal.size(); ++i) {
                if (traversal[i] == '-') {
                    ++ln;
                } else {
                    int d = 0;
                    while (isdigit(traversal[i])) {
                        d = d * 10 + (traversal[i] - '0');
                        ++i;
                    }

                    auto *node = new TreeNode(d);
                    if (root == nullptr)
                        root = node;

                    while (st.size() > ln) {
                        st.pop();
                    }

                    if (!st.empty()) {
                        if (st.top()->left == nullptr) {
                            st.top()->left = node;
                        } else {
                            st.top()->right = node;
                        }
                    }

                    st.push(node);

                    --i;
                    ln = 0;
                }
            }

            return root;
        }
    };
}