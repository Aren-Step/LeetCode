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
#include "71 - Simplify Path/Solution.h"

int main() {
    string path = "/home//aren///..//benedict/vince../../..curr././system/myDic/";
    cout << "Given path:\n" << path << endl;
    cout << "Simplified path:\n" << Solution::simplifyPath(path) << endl;

    return 0;
}