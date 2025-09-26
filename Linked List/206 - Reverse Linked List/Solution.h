//
// Created by Admin on 9/27/2025.
//

#ifndef LEETCODE_206_REVERSE_LINKED_LIST_H
#define LEETCODE_206_REVERSE_LINKED_LIST_H

#include "../ListNode.h"

class Solution {
public:
    static ListNode *reverseList(ListNode *head) {
        ListNode* result = nullptr;

        while (head) {
            ListNode* temp = head->next;
            head->next = result;
            result = head;
            head = temp;
        }

        return result;
    }
};

#endif //LEETCODE_206_REVERSE_LINKED_LIST_H