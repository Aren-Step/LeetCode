//
// Created by Admin on 10/13/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

class MyCircularQueue {
public:
    MyCircularQueue(int k) {
        q = new int*[k + 1];
        head = *q;
        q[k] = head;
        capacity = k;
    }

    bool enQueue(int value) {
        if (this->isFull()) {
            return false;
        }

        return true;
    }

    bool deQueue() {
        if (this->isEmpty()) {
            return false;
        }
    }

    int Front() {
        if (this->isEmpty()) {
            return -1;
        }
        return *head;
    }

    int Rear() {
        if (this->isEmpty()) {
            return -1;
        }
        return *q[capacity - 1];
    }

    bool isEmpty() {
        for (int i = 0; i < capacity; i++) {
            if (*q[i]) {
                return false;
            }
        }
        return true;
    }

    bool isFull() {
        for (int i = 0; i < capacity; i++) {
            if (!*q[i]) {
                return false;
            }
        }
        return true;
    }
private:
    int** q;
    int* head;
    int capacity;
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */

#endif //LEETCODE_SOLUTION_H