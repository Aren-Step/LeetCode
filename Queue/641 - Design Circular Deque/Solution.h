//
// Created by Admin on 10/19/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <queue>
using namespace std;

class MyCircularDeque {
public:
    MyCircularDeque(int k) {
        size = k;
    }

    bool insertFront(int value) {
        if (!isFull()) {
            while (!q.empty()) {
                temp_q.push(q.front());
                q.pop();
            }
            q.push(value);
            while (!temp_q.empty()) {
                q.push(temp_q.front());
                temp_q.pop();
            }
            return true;
        }
        return false;
    }

    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }

        q.push(value);
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }

        q.pop();
        return true;
    }

    bool deleteLast() {
        if (!isEmpty()) {
            while (q.size() > 1) {
                temp_q.push(q.front());
                q.pop();
            }
            q.pop();
            while (!temp_q.empty()) {
                q.push(temp_q.front());
                temp_q.pop();
            }
            return true;
        }
        return false;
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        }
        return q.front();
    }

    int getRear() {
        if (isEmpty()) {
            return -1;
        }
        return q.back();
    }

    bool isEmpty() {
        return q.empty();
    }

    bool isFull() {
        return q.size() == size;
    }
private:
    queue<int> q, temp_q;
    int size;
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */

#endif //LEETCODE_SOLUTION_H