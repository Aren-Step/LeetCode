//
// Created by Admin on 10/22/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    int timeRequiredToBut(vector<int>& tickets, int k) {
        queue<pair<int, int>> q;
        for (int i = 0; i < tickets.size(); i++) {
            q.push({i, tickets[i]});
        }
        int time = 0;
        while (!q.empty()) {
            auto [person, person_tickets] = q.front();
            q.pop();
            person_tickets--;
            time++;
            if (person_tickets > 0) {
                q.push({person, person_tickets});
            }
            if (person == k && person_tickets == 0) {
                break;
            }
        }
        return time;
    }
};

#endif //LEETCODE_SOLUTION_H