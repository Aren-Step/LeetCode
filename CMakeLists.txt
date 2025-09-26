cmake_minimum_required(VERSION 4.0)
project(LeetCode)

set(CMAKE_CXX_STANDARD 20)

add_executable(Linked-List "Linked List/main.cpp"
        "Linked List/ListNode.h"
        "Linked List/2 - Add Two Numbers/Solution.h"
        "Linked List/21 - Merge Two Sorted Lists/Solution.h"
        "Linked List/83 - Remove Duplicates from Sorted List/Solution.h"
        "Linked List/141 - Linked List Cycle/Solution.h"
        "Linked List/160 - Intersection of Two Linked Lists/Solution.h"
)

add_executable(Dynamic-Programming "Dynamic Programming/main.cpp"
        "Dynamic Programming/300 - Longest Increasing Subsequence/Solution.h"
)
