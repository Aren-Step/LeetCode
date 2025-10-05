//
// Created by Admin on 10/5/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    static vector<int> finalPrices(vector<int>& prices) {
        vector<int> finals;
        for (int i = 0; i < prices.size(); i++) {
            finals.push_back(prices[i]);
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] <= prices[i]) {
                    finals.pop_back();
                    finals.push_back(prices[i] - prices[j]);
                    break;
                }
            }
        }
        return finals;
    }
};

#endif //LEETCODE_SOLUTION_H