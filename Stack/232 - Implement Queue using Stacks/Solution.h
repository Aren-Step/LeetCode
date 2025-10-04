//
// Created by Admin on 10/4/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <stack>

class MyQueue {
public:
    MyQueue() {}

    void push(int x) {
        enqueueStack.push(x);
    }

    int pop() {
        peek();
        int lastVal = dequeueStack.top();
        dequeueStack.pop();

        return lastVal;
    }

    int peek() {
        if (dequeueStack.empty()) {
            while (!(enqueueStack.empty())) {
                dequeueStack.push(enqueueStack.top());
                enqueueStack.pop();
            }
        }
        return dequeueStack.top();
    }

    bool empty() {
        return enqueueStack.empty() && dequeueStack.empty();
    }
private:
    stack<int> enqueueStack;
    stack<int> dequeueStack;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

#endif //LEETCODE_SOLUTION_H