//
// Created by Admin on 10/13/2025.
//

#include <iostream>
#include <vector>
using namespace std;

// #include "733 - Flood Fill/Solution.h"
// #include "542 - 01 Matrix/Solution.h"
#include "130 - Surrounded Regions/Solution.h"
#include "PrintMatrix.h"
int main() {
    vector<vector<char>> board = {
        {'X', 'X', 'X', 'X', 'O'},
        {'X', 'X', 'O', 'O', 'X'},
        {'X', 'O', 'X', 'X', 'O'},
        {'O', 'O', 'X', 'O', 'X'},
        {'X', 'X', 'O', 'X', 'X'},
    };

    Solution::solve(board);
    cout << "\nFinal result:\n";
    PrintMatrix(board);

    return 0;
}