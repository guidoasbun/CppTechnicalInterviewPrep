//
// Created by Rodrigo Asbun on 10/24/21.
//

#include "HackerRank.h"
#include <iostream>
#include <vector>
#include "unordered_set"

using namespace std;

void forLoop() {
    string words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; ++i) {
        if (i <= 9) {
            cout << words[i - 1] << endl;
        } else {
            cout << (i % 2 ? "odd" : "even") << endl;
        }
    }
}

int sockMerchant(int n, const vector<int>& ar) {
    unordered_set<int> sockNum;
    int solution{0};
    for (int num : ar) {
        if (sockNum.find(num) != sockNum.end()) {
            sockNum.erase(num);
            ++solution;
        } else {
            sockNum.insert(num);
        }
    }

    return solution;
}

int countingValleys(int steps, const string& path){
    int solution{0};
    int level{0};
    for (auto direction: path){
        if (direction == 'U')
            ++level;
        if (direction == 'D')
            --level;
        if (level == 0 && direction == 'U')
            ++solution;
    }
    return solution;
}

int jumpingOnClouds(const vector<int>& c) {
    int solution{-1};
    for (size_t i{0}, cSize{c.size()}; i < cSize;) {
        if (i + 2 < cSize && c[i + 2] == 0) {
            i +=2;
        } else {
            ++i;
        }
        ++solution;
    }

    return solution;
}
