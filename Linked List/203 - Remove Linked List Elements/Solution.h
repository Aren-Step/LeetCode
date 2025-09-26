//
// Created by Admin on 9/26/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../ListNode.h"

class Solution {
public:
    static ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp_result = new ListNode(0, head);
        ListNode *curr = temp_result;
        while (curr)
        {
            while (curr->next && curr->next->val == val) {
                curr->next = curr->next->next;
            }
            curr = curr->next;
        }

        ListNode *result = temp_result->next;
        delete temp_result;
        return result;
    }
};

#endif //LEETCODE_SOLUTION_H