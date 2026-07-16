//
// Created by marks on 16.07.2026.
// https://leetcode.com/problems/linked-list-cycle-ii
//

#include "solutions/ListNode.h"

namespace medium {
    class S142 {
    public:
        static ListNode *detectCycle(ListNode *head) {
            ListNode *slow = head;
            ListNode *fast = head;

            while (fast != nullptr && fast->next != nullptr) {
                slow = slow->next;
                fast = fast->next->next;

                if (slow == fast) {
                    slow = head;

                    while (slow != fast) {
                        slow = slow->next;
                        fast = fast->next;
                    }

                    return slow;
                }
            }

            return nullptr;
        }
    };
}