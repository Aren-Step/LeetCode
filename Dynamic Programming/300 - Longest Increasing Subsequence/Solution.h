//
// Created by Admin on 9/26/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        vector<int> dp(n, 1);
        int maxLen = 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
                maxLen = max(maxLen, dp[i]);
            }
        }
        return maxLen;
    }
};

#endif //LEETCODE_SOLUTION_H