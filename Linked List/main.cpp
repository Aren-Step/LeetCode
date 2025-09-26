#include <iostream>
using namespace std;

// #include "2 - Add Two Numbers/Solution.h"
// #include "21 - Merge Two Sorted Lists/Solution.h"
// #include "83 - Remove Duplicates from Sorted List/Solution.h"
// #include "141 - Linked List Cycle/Solution.h"
#include "160 - Intersection of Two Linked Lists/Solution.h"

int main() {
    ListNode *head1 = nullptr, *curr1 = nullptr;
    ListNode *head2 = nullptr, *curr2 = nullptr;

    int n1, n2;
    cout << "Number of nodes for list1 and list2: ";
    cin >> n1 >> n2;

    cout << "Enter " << n1 << " values for first list:" << endl;
    for (int i = 0; i < n1; i++) {
        int value;
        cin >> value;
        if (!head1) {
            head1 = new ListNode(value);
            curr1 = head1;
        } else {
            curr1->next = new ListNode(value);
            curr1 = curr1->next;
        }
    }

    cout << "Enter " << n2 << " values for second list:" << endl;
    for (int i = 0; i < n2; i++) {
        int value;
        cin >> value;
        if (!head2) {
            head2 = new ListNode(value);
            curr2 = head2;
        } else {
            curr2->next = new ListNode(value);
            curr2 = curr2->next;
        }
    }

    // Solution function
    const ListNode *result = Solution::getIntersectionNode(head1, head2);
    while (result) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;

    // Clean up first list
    while (head1) {
        ListNode *temp = head1;
        head1 = head1->next;
        delete temp;
    }

    // Clean up second list
    while (head2) {
        ListNode *temp = head2;
        head2 = head2->next;
        delete temp;
    }

    return 0;
}
