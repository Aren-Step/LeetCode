//
// Created by Admin on 9/26/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../ListNode.h"

class Solution {
public:
    static ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode *curr1 = headA;
        ListNode *curr2 = headB;
        while (curr1 != curr2) {
            if (!curr1) {
                curr1 = headB;
            }
            else {
                curr1 = curr1->next;
            }
            if (!curr2) {
                curr2 = headA;
            }
            else {
                curr2 = curr2->next;
            }
        }
        return curr1;
    }
};

#endif //LEETCODE_SOLUTION_H