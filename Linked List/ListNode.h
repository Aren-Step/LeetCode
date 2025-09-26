//
// Created by Admin on 9/15/2025.
//

#ifndef LEETCODE_LINKED_LIST_H
#define LEETCODE_LINKED_LIST_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#endif //LEETCODE_LINKED_LIST_H