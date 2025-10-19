//
// Created by Admin on 10/13/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using namespace std;

class MyCircularQueue {
public:
    MyCircularQueue(int k) {
        arr.resize(k);
        front = 0;
        rear = -1;
        count = 0;
        size = k;
    }

    bool enQueue(int value) {
        if (this->isFull()) {
            return false;
        }
        rear = (rear + 1) % size;
        arr[rear] = value;
        count++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        front = (front + 1) % size;
        count--;
        return true;
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == size;
    }

private:
    vector<int> arr;
    int front, rear, size, count;
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