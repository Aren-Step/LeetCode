//
// Created by Admin on 9/26/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../ListNode.h"

class Solution {
public:
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* current = new ListNode();
        ListNode* temp_result = current;
        int digit_sum = 0, carry = 0;

        while (l1 || l2 || carry) {
            digit_sum = carry;

            if (l1) {
                digit_sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                digit_sum += l2->val;
                l2 = l2->next;
            }

            int digit = digit_sum % 10;
            carry = digit_sum / 10;
            current->next = new ListNode(digit);
            current = current->next;
        }

        ListNode* result = temp_result->next;
        delete temp_result;
        return result;
    }
};

#endif //LEETCODE_SOLUTION_H