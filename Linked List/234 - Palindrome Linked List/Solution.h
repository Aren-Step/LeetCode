//
// Created by Admin on 9/27/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../ListNode.h"

class Solution {
public:
    static bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* rev_half = nullptr;
        while (slow) {
            ListNode* temp = slow->next;
            slow->next = rev_half;
            rev_half = slow;
            slow = temp;
        }

        ListNode* first_half = head;
        ListNode* second_half = rev_half;

        while (second_half) {
            if (first_half->val != second_half->val) {
                return false;
            }
            first_half = first_half->next;
            second_half = second_half->next;
        }

        return true;
    }
};

#endif //LEETCODE_SOLUTION_H