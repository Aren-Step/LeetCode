//
// Created by Admin on 9/26/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../ListNode.h"

class Solution {
public:
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1 && !l2) return nullptr;
        if (!l1) return l2;
        if (!l2) return l1;
        int carry = 0;
        ListNode *first = new ListNode((l1->val + l2->val) % 10);
        carry = (l1->val + l2->val) >= 10;
        l1 = l1->next;
        l2 = l2->next;
        ListNode *last = first;
        while (l1 || l2) {
            int a, b;
            a = !l1 ? 0 : l1->val;
            b = !l2 ? 0 : l2->val;
            last->next = new ListNode((a + b + carry) % 10);
            last = last->next;
            carry = (a + b + carry) / 10;
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }
        if (carry) {
            last->next = new ListNode(carry);
            return first;
        }
        return first;
    }
};

#endif //LEETCODE_SOLUTION_H