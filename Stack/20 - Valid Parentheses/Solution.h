//
// Created by Admin on 9/29/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else {
                if (st.empty()) return false;
                if (s[i] == ')' && st.top() != '(') return false;
                if (s[i] == ']' && st.top() != '[') return false;
                if (s[i] == '}' && st.top() != '{') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

#endif //LEETCODE_SOLUTION_H