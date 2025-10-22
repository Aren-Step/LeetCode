//
// Created by Admin on 10/22/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q, snd;
        int setbacks = 0;
        for (int student : students) {
            q.push(student);
        }
        for (int sandwich : sandwiches) {
            snd.push(sandwich);
        }
        while (setbacks < q.size()) {
            if (q.front() == snd.front()) {
                q.pop();
                snd.pop();
                setbacks = 0;
            }
            else {
                q.push(q.front());
                q.pop();
                setbacks++;
            }
        }
        return setbacks;
    }
};

#endif //LEETCODE_SOLUTION_H