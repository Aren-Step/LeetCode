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
    bool isIslandClosed(vector<vector<int>>& grid, int x, int y) {
        queue<pair<int, int>> q;
        q.push({x, y});
        grid[x][y] = 1;
        bool isClosed = true;

        int dir_i[] = {-1, 0, 1, 0};
        int dir_j[] = {0, 1, 0, -1};
        while (!q.empty()) {
            auto [i, j] = q.front();
            q.pop();

            if (i == 0 || j == 0 ||
                i == grid.size() - 1 || j == grid[0].size() - 1) {
                    isClosed = false;
            }

            for (int k = 0; k < 4; k++) {
                int nb_i = i + dir_i[k];
                int nb_j = j + dir_j[k];

                if (nb_i >= 0 && nb_i < grid.size() &&
                    nb_j >= 0 && nb_j < grid[0].size() &&
                    grid[nb_i][nb_j] == 0) {
                        q.push({nb_i, nb_j});
                        grid[nb_i][nb_j] = 1;
                }
            }
        }
        return isClosed;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 0 && isIslandClosed(grid, i, j)) {
                    count++;
                }
            }
        }

        return count;
    }
};

#endif //LEETCODE_SOLUTION_H