//
// Created by Admin on 9/27/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../ListNode.h"

class Solution {
public:
    static int getDecimalValue(ListNode *head) {
        int result = 0;
        while (head) {
            result = (result << 1) | head->val;
            head = head->next;
        }
        return result;
    }
};

#endif //LEETCODE_SOLUTION_H