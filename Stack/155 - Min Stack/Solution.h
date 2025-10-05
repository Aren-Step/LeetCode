//
// Created by Admin on 10/5/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <stack>
using namespace std;

class MinStack {
public:
    MinStack() = default;

    void push(int val) {
        all_stack.push(val);
        if (mins_stack.empty() || val <= mins_stack.top()) {
            mins_stack.push(val);
        }
    }

    void pop() {
        if (all_stack.top() == mins_stack.top()) {
            mins_stack.pop();
        }
        all_stack.pop();
    }

    int top() {
        if (all_stack.empty()) {
            return -1;
        }
        return all_stack.top();
    }

    int getMin() {
        if (mins_stack.empty()) {
            return -1;
        }
        return mins_stack.top();
    }

private:
    stack<int> all_stack, mins_stack;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

#endif //LEETCODE_SOLUTION_H