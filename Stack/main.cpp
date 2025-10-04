//
// Created by Admin on 9/29/2025.
//

#include <iostream>
using namespace std;

//#include "20 - Valid Parentheses/Solution.h"
// #include "150 - Evaluate Reverse Polish Notation/Solution.h"
#include "232 - Implement Queue using Stacks/Solution.h"

int main() {
    MyQueue* obj = new MyQueue();
    int x;
    cout << "input element: ";      cin >> x;
    obj->push(x);                   cout << "pushed element: " << x << endl;
    obj->push(15);                cout << "pushed element: " << 15 << endl;
    obj->push(125);               cout << "pushed element: " << 125 << endl;
    int param_2 = obj->pop();       cout << "popped element: " << param_2 << endl;
    obj->push(300);               cout << "pushed element: " << 300 << endl;
    int param_3 = obj->pop();       cout << "popped element: " << param_3 << endl;
    int param_4 = obj->peek();      cout << "peeked element: " << param_4 << endl;
    bool param_5 = obj->empty();    cout << "is queue empty? " << param_5 << endl;

    while (!obj->empty()) {
        cout << obj->peek() << " ";
        obj->pop();
    }

    delete obj;
    return 0;
}