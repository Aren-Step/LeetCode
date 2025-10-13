//
// Created by Admin on 10/13/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    static vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) {
            return image;
        }
        int n = image.size();
        int m = image[0].size();
        pair<int, int> p;
        queue<pair<int, int>> q;
        // put the coordinates of the initial cell into a queue
        int c = image[sr][sc];
        q.push(make_pair(sr, sc));
        image[sr][sc] = color;
        while (!q.empty()) {
            // remove the first one from the queue
            p = q.front();
            q.pop();
            int x = p.first;
            int y = p.second;
            // check the 4 neighbor cells and add them to the queue if necessary
            if (x - 1 >= 0 && image[x - 1][y] == c) {
                image[x - 1][y] = color;
                q.push(make_pair(x - 1, y));
            }
            if (y + 1 < m && image[x][y + 1] == c) {
                image[x][y + 1] = color;
                q.push(make_pair(x, y + 1));
            }
            if (x + 1 < n && image[x + 1][y] == c) {
                image[x + 1][y] = color;
                q.push(make_pair(x + 1, y));
            }
            if (y - 1 >= 0 && image[x][y - 1] == c) {
                image[x][y - 1] = color;
                q.push(make_pair(x, y - 1));
            }
        }
        return image;
    }
};

#endif //LEETCODE_SOLUTION_H