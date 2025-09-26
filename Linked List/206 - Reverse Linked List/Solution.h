//
// Created by Admin on 9/27/2025.
//

#ifndef LEETCODE_206_REVERSE_LINKED_LIST_H
#define LEETCODE_206_REVERSE_LINKED_LIST_H

#include "../ListNode.h"

class Solution {
public:
    static ListNode *reverseList(ListNode *head) {
        ListNode* node = nullptr;

        while (head != nullptr) {
            ListNode* temp = head->next;
            head->next = node;
            node = head;
            head = temp;
        }

        return node;
    }
};

#endif //LEETCODE_206_REVERSE_LINKED_LIST_H