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
    static string clearDigits(string s) {
        string no_digits;
        for (int i = 0; i < s.size(); i++) {
            if (!no_digits.empty() && s[i] >= '0' && s[i] <= '9') {
                no_digits.pop_back();
            }
            else {
                no_digits.push_back(s[i]);
            }
        }
        return no_digits;
    }
};

#endif //LEETCODE_SOLUTION_H