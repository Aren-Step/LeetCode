//
// Created by Admin on 9/29/2025.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

//#include "20 - Valid Parentheses/Solution.h"
// #include "150 - Evaluate Reverse Polish Notation/Solution.h"
// #include "232 - Implement Queue using Stacks/Solution.h"
// #include "682 - Baseball Game/Solution.h"
// #include "71 - Simplify Path/Solution.h"
// #include "155 - Min Stack/Solution.h"
// #include "1047 - Remove All Adjacent Duplicates In String/Solution.h"
// #include "1475 - Final Prices With a Special Discount in a Shop/Solution.h"
// #include "2696 - Minimum String Length After Removing Substrings/Solution.h"
// #include "3174 - Clear Digits/Solution.h"
#include "739 - Daily Temperatures/Solution.h"

int main() {
    vector<int> temperatures = {45, 78, 15, 41, 79, 51, 84, 11, 77};
    vector<int> result = Solution::dailyTemperatures(temperatures);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
