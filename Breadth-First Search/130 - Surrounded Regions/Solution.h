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
    static void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++) {
            if (board[i][0] == 'O') {
                q.push({i, 0});
                board[i][0] = 'S';
            }
            if (board[i][m - 1] == 'O') {
                q.push({i, m - 1});
                board[i][m - 1] = 'S';
            }
        }
        for (int j = 0; j < m; j++) {
            if (board[0][j] == 'O') {
                q.push({0, j});
                board[0][j] = 'S';
            }
            if (board[n - 1][j] == 'O') {
                q.push({n - 1, j});
                board[n - 1][j] = 'S';
            }
        }
        int dir_i[] = {-1, 0, 1, 0};
        int dir_j[] = {0, 1, 0, -1};
        while (!q.empty()) {
            auto [i,j] = q.front();
            q.pop();

            for (int k = 0; k < 4; k++) {
                int nb_i = i + dir_i[k];
                int nb_j = j + dir_j[k];

                if (nb_i >= 0 && nb_i < n && nb_j >= 0 && nb_j < m && board[nb_i][nb_j] == 'O') {
                    board[nb_i][nb_j] = 'S';
                    q.push({nb_i, nb_j});
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (board[i][j] == 'O')
                    board[i][j] = 'X';
                else if (board[i][j] == 'S')
                    board[i][j] = 'O';
            }
        }
    }
};

#endif //LEETCODE_SOLUTION_H