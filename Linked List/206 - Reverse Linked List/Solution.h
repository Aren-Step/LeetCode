//
// Created by Admin on 9/27/2025.
//

#ifndef LEETCODE_206_REVERSE_LINKED_LIST_H
#define LEETCODE_206_REVERSE_LINKED_LIST_H

#include "../ListNode.h"

class Solution {
public:
    static ListNode* reverseList(ListNode *head) {
        ListNode* result = nullptr;

        while (head) {
            ListNode* temp = head->next;
            head->next = result;
            result = head;
            head = temp;
        }

        /*
         * head     7->8->9->10     7->NULL     8->9->10  |  9->10      9->8->7     9->10   |   9->8->7     10  |   10->9->8->7     NULL
         * temp     8->9->10                              |  9->10                          |   10              |   NULL
         * result   NULL            7->NULL               |  8->7       9->8->7             |   9->8->7         |   10->9->8->7
         */

        return result;
    }
};

#endif //LEETCODE_206_REVERSE_LINKED_LIST_H