//
// Created by Admin on 10/19/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    static int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int> > q;
        vector<vector<int> > visited(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    visited[i][j] = 1;
                    q.push({i, j});
                    break;
                }
            }
        }
        int perimeter = 0;
        int dir_i[] = {-1, 0, 1, 0};
        int dir_j[] = {0, 1, 0, -1};
        while (!q.empty()) {
            auto [curr_i, curr_j] = q.front();
            q.pop();
            for (int k = 0; k < 4; k++) {
                int nb_i = curr_i + dir_i[k];
                int nb_j = curr_j + dir_j[k];
                if (nb_i < 0 || nb_i >= n || nb_j < 0 || nb_j >= m)
                    perimeter++;
                else {
                    if (grid[nb_i][nb_j] == 0)
                        perimeter++;
                    else if (!visited[nb_i][nb_j]) {
                        q.push({nb_i, nb_j});
                        visited[nb_i][nb_j] = 1;
                    }
                }
            }
        }
        return perimeter;
    }
};

#endif //LEETCODE_SOLUTION_H