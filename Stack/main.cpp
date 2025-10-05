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
#include "682 - Baseball Game/Solution.h"

int main() {
    vector<string> ops = {"5", "2", "C", "D", "+"};
    cout << "Final Score: " << Solution::calPoints(ops) << endl;

    return 0;
}