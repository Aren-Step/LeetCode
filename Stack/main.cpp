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
#include "1475 - Final Prices With a Special Discount in a Shop/Solution.h"

int main() {
    vector<int> prices = {8,4,6,2,3};
    for (int i = 0; i < prices.size(); i++) {
        cout << prices[i] << " ";
    }
    cout << endl;
    vector<int> finals = Solution::finalPrices(prices);
    for (int i = 0; i < finals.size(); i++) {
        cout << finals[i] << " ";
    }

    return 0;
}