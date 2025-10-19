//
// Created by Admin on 10/19/2025.
//

#ifndef LEETCODE_PRINTMATRIX_H
#define LEETCODE_PRINTMATRIX_H

#include <vector>
#include <iostream>
using namespace std;

template<typename T>
static void PrintMatrix(const vector<vector<T>> matrix) {
    const int n = matrix.size(), m = matrix[0].size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
}

#endif //LEETCODE_PRINTMATRIX_H