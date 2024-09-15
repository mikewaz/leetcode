//
// Created by Марк
// Ref https://leetcode.com/problems/linked-list-cycle-ii/
//

#include "Solution142.h"

ListNode* Sol142::Solution142::detectCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;

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
