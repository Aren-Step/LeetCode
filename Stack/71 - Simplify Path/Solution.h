//
// Created by Admin on 10/5/2025.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <stack>
#include <vector>
#include <string>
#include <pstl/unseq_backend_simd.h>
using namespace std;

class Solution {
public:
    static string simplifyPath(string path) {
        stack<string> directories;
        string simple_path;
        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/') {
                continue;
            }
            string curr_dir_name;
            while (i < path.size() && path[i] != '/') {
                curr_dir_name += path[i++];
            }
            if (curr_dir_name == ".") {
                continue;
            }
            if (curr_dir_name == "..") {
                if (!directories.empty()) {
                    directories.pop();
                }
            }
            else {
                directories.push(curr_dir_name);
            }
        }

        while (!directories.empty()) {
            simple_path.insert(0, "/" + directories.top());
            directories.pop();
        }

        if (simple_path.empty()) {
            return "/";
        }
        return simple_path;
    }
};

#endif //LEETCODE_SOLUTION_H