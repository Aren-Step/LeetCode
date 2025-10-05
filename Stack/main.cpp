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
#include "1047 - Remove All Adjacent Duplicates In String/Solution.h"

int main() {
    const string s = "abbac";
    cout << "Initial string: " << s << endl;
    cout << "without duplicates: " << Solution::removeDuplicates(s) << endl;

    return 0;
}