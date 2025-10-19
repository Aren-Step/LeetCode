//
// Created by Admin on 10/19/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        queue<vector<int>> q;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1 && (i == 0 || i == n - 1 || j == 0 || j == m - 1)) {
                    q.push({i, j});
                    visited[i][j] = 1;
                }
            }
        }

        int dir_i[] = {-1, 0, 1, 0};
        int dir_j[] = {0, 1, 0, -1};

        while(!q.empty()) {
            vector<int> p = q.front();
            q.pop();

            for(int k = 0; k < 4; k++) {
                int nb_i = p[0] + dir_i[k];
                int nb_j = p[1] + dir_j[k];
                if(nb_i >= 0 && nb_i < n && nb_j >= 0 && nb_j < m &&
                    grid[nb_i][nb_j] == 1 && visited[nb_i][nb_j] == 0) {
                    q.push({nb_i, nb_j});
                    visited[nb_i][nb_j] = 1;
                }
            }
        }

        int count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                count += (grid[i][j] == 1 && visited[i][j] == 0);
            }
        }

        return count;
    }
};


#endif //LEETCODE_SOLUTION_H