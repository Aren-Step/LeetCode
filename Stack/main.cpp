//
// Created by Admin on 9/29/2025.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

//#include "20 - Valid Parentheses/Solution.h"
// #include "150 - Evaluate Reverse Polish Notation/Solution.h"
// #include "232 - Implement Queue using Stacks/Solution.h"
// #include "682 - Baseball Game/Solution.h"
// #include "71 - Simplify Path/Solution.h"
#include "155 - Min Stack/Solution.h"

int main() {
    int val = 10;
    MinStack* obj = new MinStack();
    obj->push(val);
    obj->push(25);
    obj->push(3);
    obj->pop();
    obj->push(1);
    obj->push(152);
    int param_3 = obj->top();
    int param_4 = obj->getMin();

    cout << "Last element: " << param_3 << "\nMinimum element: " << param_4 << endl;

    delete obj;
    return 0;
}