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
    static void countIsland(vector<vector<char> > grid, vector<vector<int> > &visited, int i, int j) {
        queue<pair<int, int> > q;
        int dir_i[] = {0, 0, 1, -1};
        int dir_j[] = {1, -1, 0, 0};
        visited[i][j] = 1;
        q.push({i, j});
        while (!q.empty()) {
            auto [curr_i, curr_j] = q.front();
            q.pop();
            for (int k = 0; k < 4; k++) {
                int nb_i = curr_i + dir_i[k];
                int nb_j = curr_j + dir_j[k];
                if (nb_i < grid.size() && nb_j < grid[0].size() &&
                visited[nb_i][nb_j] == 0 && grid[nb_i][nb_j] == '1') {
                    visited[nb_i][nb_j] = 1;
                    q.push({nb_i, nb_j});
                }
            }
        }
    }
    static int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>>visited(grid.size(),vector<int>(grid[0].size(),0));
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(visited[i][j]==0 && grid[i][j]=='1'){
                    countIsland(grid,visited,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};

#endif //LEETCODE_SOLUTION_H