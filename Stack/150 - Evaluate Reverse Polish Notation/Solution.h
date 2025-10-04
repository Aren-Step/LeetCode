//
// Created by Admin on 9/29/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <stack>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    static int evalRPN(vector<string>& tokens) {
        stack<int> t;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" &&
                tokens[i] != "*" && tokens[i] != "/")
                t.push(stoi(tokens[i]));
            else {
                const int x = t.top();    t.pop();
                const int y = t.top();    t.pop();
                if (tokens[i] == "+") {
                    t.push(x + y);
                }
                else if (tokens[i] == "-") {
                    t.push(y - x);
                }
                else if (tokens[i] == "*") {
                    t.push(x * y);
                }
                else if (tokens[i] == "/") {
                    t.push(y / x);
                }
            }
        }
        return t.top();
    }
};

#endif //LEETCODE_SOLUTION_H