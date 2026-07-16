//
// Created by marks on 09.04.2026.
// https://leetcode.com/problems/swap-nodes-in-pairs
//

#include "solutions/ListNode.h"

namespace medium {
     class S24 {
     public:
         static ListNode* swapPairs(ListNode *head) {
             ListNode *prev = nullptr;
             ListNode *curr = head;
             ListNode *next = nullptr;
             ListNode *nextNext = nullptr;

             while (curr && curr->next) {
                 next = curr->next;
                 nextNext = curr->next->next;

                 curr->next = nextNext;
                 next->next = curr;

                 if (prev)
                     prev->next = next;
                 else
                     head = next;

                 prev = curr;
                 curr = nextNext;
             }
             return head;
         }
     };
}