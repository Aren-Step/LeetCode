cmake_minimum_required(VERSION 4.0)
project(LeetCode)

set(CMAKE_CXX_STANDARD 20)

add_executable(Linked-List "Linked List/main.cpp"
        "Linked List/ListNode.h"
        "Linked List/2 - Add Two Numbers/Solution.h"
        "Linked List/21 - Merge Two Sorted Lists/Solution.h"
        "Linked List/83 - Remove Duplicates from Sorted List/Solution.h"
        "Linked List/141 - Linked List Cycle/Solution.h"
        "Linked List/142 - Linked List Cycle II/Solution.h"
        "Linked List/160 - Intersection of Two Linked Lists/Solution.h"
        "Linked List/203 - Remove Linked List Elements/Solution.h"
        "Linked List/206 - Reverse Linked List/Solution.h"
        "Linked List/234 - Palindrome Linked List/Solution.h"
        "Linked List/876 - Middle of the Linked List/Solution.h"
        "Linked List/1290 - Convert Binary Number in a Linked List to Integer/Solution.h"
)

add_executable(Dynamic-Programming "Dynamic Programming/main.cpp"
        "Dynamic Programming/300 - Longest Increasing Subsequence/Solution.h"
)
add_executable(Stack Stack/main.cpp
        "Stack/20 - Valid Parentheses/Solution.h"
        "Stack/71 - Simplify Path/Solution.h"
        "Stack/150 - Evaluate Reverse Polish Notation/Solution.h"
        "Stack/155 - Min Stack/Solution.h"
        "Stack/232 - Implement Queue using Stacks/Solution.h"
        "Stack/682 - Baseball Game/Solution.h"
        "Stack/739 - Daily Temperatures/Solution.h"
        "Stack/1047 - Remove All Adjacent Duplicates In String/Solution.h"
        "Stack/1475 - Final Prices With a Special Discount in a Shop/Solution.h"
        "Stack/2696 - Minimum String Length After Removing Substrings/Solution.h"
        "Stack/3174 - Clear Digits/Solution.h"
)
add_executable(Queue Queue/main.cpp
        "Queue/622 - Design Circular Queue/Solution.h"
        "Queue/641 - Design Circular Deque/Solution.h")
add_executable(Array Array/main.cpp
        "Array/733 - Flood Fill/Solution.h"
        "Array/463 - Island Perimeter/Solution.h"
        "Array/200 - Number of Islands/Solution.h"
        "Array/542 - 01 Matrix/Solution.h"
        Array/PrintMatrix.h)
