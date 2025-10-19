//
// Created by Admin on 10/13/2025.
//

#include <iostream>
#include <vector>
using namespace std;

// #include "733 - Flood Fill/Solution.h"
#include "542 - 01 Matrix/Solution.h"

int main() {
    vector<vector<int>> matrix = {
        {0, 0, 1, 0},
        {1, 1, 0, 0},
        {1, 1, 1, 1},
        {1, 0, 0, 1}
    };

    vector<vector<int>> result = Solution::updateMatrix(matrix);
    cout << "\nFinal result:\n";
    PrintMatrix(result);

    return 0;
}