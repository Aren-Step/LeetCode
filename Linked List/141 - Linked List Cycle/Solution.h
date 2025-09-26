//
// Created by Admin on 9/26/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../ListNode.h"

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) {
            return false;
        }
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast && fast->next) {
            if (slow == fast)
                return true;

            fast = fast->next->next;
            slow = slow->next;
        }
        return false;
    }
};

#endif //LEETCODE_SOLUTION_H