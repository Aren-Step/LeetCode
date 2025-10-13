//
// Created by Admin on 10/13/2025.
//

#include <iostream>
#include <vector>
using namespace std;

#include "733 - Flood Fill/Solution.h"

int main() {
    vector<vector<int>> image = {{1, 1, 0}, {0, 1, 0}, {1, 1, 1}};
    int sr = 1, sc = 1, color = 1;
    vector<vector<int>> result = Solution::floodFill(image, sr, sc, color);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[0].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}