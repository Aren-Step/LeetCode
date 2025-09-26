//
// Created by Admin on 9/26/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../ListNode.h"

class Solution {
public:
    static ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp_result = new ListNode(0, nullptr);
        ListNode *current = temp_result;

        while (list1 && list2) {
            if (list1->val < list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }

        if (list1) current->next = list1;
        if (list2) current->next = list2;

        ListNode* result = temp_result->next;
        delete temp_result;
        return result;

    }
};

#endif //LEETCODE_SOLUTION_H