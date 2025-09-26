//
// Created by Admin on 9/26/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../ListNode.h"

class Solution {
public:
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = new ListNode();
        int carry = 0;
        while (l1 || l2 || carry) {
            int sumDigit = carry;
            if (l1) {
                sumDigit += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sumDigit += l2->val;
                l2 = l2->next;
            }
            carry = sumDigit / 10;
            sumDigit %= 10;
            sum->next = new ListNode(sumDigit);
            sum = sum->next;
        }

        return sum;
    }
};

#endif //LEETCODE_SOLUTION_H