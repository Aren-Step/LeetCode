//
// Created by Admin on 9/26/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../ListNode.h"

class Solution {
public:
    static ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head;

        ListNode* current = head;
        while (current) {
            if (current->next && current->val == current->next->val) {
                current->next = current->next->next;
            } else {
                current = current->next;
            }
        }

        return head;
    }
};

#endif //LEETCODE_SOLUTION_H