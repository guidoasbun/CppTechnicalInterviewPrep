//
// Created by Rodrigo Asbun on 10/24/21.
//

#include "HackerRank.h"
#include <iostream>

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
