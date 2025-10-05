//
// Created by Admin on 10/5/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
using namespace std;

class Solution {
public:
    static string removeDuplicates(string s) {
        string result;
        for ( int i = 0; i < s.size();  i++) {
            if (!result.empty() && result.back() == s[i]) {
                result.pop_back();
            }
            else {
                result.push_back(s[i]);
            }
        }

        return result;
    }
};

#endif //LEETCODE_SOLUTION_H