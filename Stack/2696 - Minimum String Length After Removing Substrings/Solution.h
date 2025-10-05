//
// Created by Admin on 10/5/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    static int minLength(string s) {
        stack<char> result;
        for ( int i = 0; i < s.size();  i++) {
            char current = s[i];
            if (!result.empty() &&
                ((result.top() == 'A' && current == 'B') ||
                (result.top() == 'C' && current == 'D'))) {
                    result.pop();
                }
            else {
                result.push(current);
            }
        }
        return result.size();
    }
};

#endif //LEETCODE_SOLUTION_H