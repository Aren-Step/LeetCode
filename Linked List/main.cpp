#include <iostream>
using namespace std;

// #include "Linked List/ListNode.h"
// #include "Linked List/2 - Add Two Numbers/Solution.h"
// #include "21 - Merge Two Sorted Lists/Solution.h"
#include "83 - Remove Duplicates from Sorted List/Solution.h"
int main() {
    ListNode* list1 = new ListNode(1);
    ListNode* node2 = new ListNode(1);
    ListNode* node3 = new ListNode(4);
    list1->next = node2;
    node2->next = node3;

    ListNode* list2 = new ListNode(1);
    ListNode* node4 = new ListNode(5);
    ListNode* node5 = new ListNode(5);
    // list2->next = node4;
    node3->next = node4;
    node4->next = node5;
    
    const ListNode* result = Solution::deleteDuplicates(list1);
    while (result) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;
    
    delete list1;
    delete list2;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
    delete result;
    
    return 0;
}