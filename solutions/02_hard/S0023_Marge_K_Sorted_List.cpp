//
// Created by marks on 17.11.2025.
// https://leetcode.com/problems/merge-k-sorted-lists/
//

#include <vector>
#include <queue>
#include "solutions/ListNode.h"

namespace hard {
    class S23_Marge_K_Sorted_List {
        static ListNode *mergeKLists(std::vector<ListNode *> &lists) {
            struct Cmp {
                bool operator()(ListNode *a, ListNode *b) const {
                    return a->val > b->val;
                }
            };

            std::priority_queue<ListNode *, std::vector<ListNode *>, Cmp> pq;

            for (auto node: lists) {
                if (node != nullptr)
                    pq.push(node);
            }

            ListNode dummy(0);
            ListNode *tail = &dummy;

            while (!pq.empty()) {
                ListNode *node = pq.top();
                pq.pop();

                tail->next = node;
                tail = tail->next;

                if (node->next != nullptr)
                    pq.push(node->next);
            }

            return dummy.next;
        }
    };
}