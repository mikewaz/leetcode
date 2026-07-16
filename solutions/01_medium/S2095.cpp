//
// Created by marks on 26.01.2026.
// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list
//

#include <iostream>
#include "solutions/ListNode.h"

namespace medium {
    class S2095 {
    public:
        ListNode* deleteMiddle(ListNode *head) {
            ListNode* target = nullptr;
            auto fast = head;
            auto slow = head;

            while (fast != nullptr) {
                target = slow;
                slow = slow->next;
                fast = fast->next->next;
            }

            if (target)
                target->next = slow->next;

            delete slow;

            return head;
        }
    };
}


