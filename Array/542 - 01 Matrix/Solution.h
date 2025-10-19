//
// Created by Admin on 10/19/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <queue>
using namespace std;

#include "../PrintMatrix.h"

class Solution {
public:
    static vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> distance(n, vector<int>(m));
        queue<pair<int, int>> q;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (mat[i][j] == 0) {
                    q.push({i, j});
                    distance[i][j] = 0;
                } else {
                    distance[i][j] = -1;
                }
            }
        }
        PrintMatrix(distance);
        int dir_i[] = {-1, 0, 1, 0};
        int dir_j[] = {0, 1, 0, -1};
        while (!q.empty()) {
            pair<int, int> curr = q.front();
            auto [i, j] = curr;
            int d = distance[i][j];
            q.pop();

            for (int k = 0; k < 4; k++) {
                int nb_i = i + dir_i[k];
                int nb_j = j + dir_j[k];
                if (nb_i >= 0 && nb_i < n && nb_j >= 0 && nb_j < m && distance[nb_i][nb_j] == -1) {
                    distance[nb_i][nb_j] = d + 1;
                    q.push({nb_i, nb_j});
                    PrintMatrix(distance);
                }
            }
        }

        return distance;
    }
};

#endif //LEETCODE_SOLUTION_H