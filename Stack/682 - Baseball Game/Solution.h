//
// Created by Admin on 10/4/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <stack>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    static int calPoints(vector<string>& operations) {
        stack<int> scores;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] != "+" &&
                operations[i] != "C" && operations[i] != "D") {
                scores.push(stoi(operations[i]));
            }
            else {
                if (operations[i] == "C") {
                    scores.pop();
                }
                if (operations[i] == "D") {
                    scores.push(scores.top() * 2);
                }
                if (operations[i] == "+") {
                    int x = scores.top();
                    scores.pop();
                    int last_two_sum = scores.top() + x;
                    scores.push(x);
                    scores.push(last_two_sum);
                }
            }
        }
        int sum = 0;
        while (!scores.empty()) {
            sum += scores.top();
            scores.pop();
        }

        return sum;
    }
};

#endif //LEETCODE_SOLUTION_H