#include "CppAlgoE/CppAlgoE.h"
#include "HackerRank/HackerRank.h"

#include <iostream>
#include <vector>
#include "CppAlgoE/CppAlgoE.h"

using namespace std;

int main() {
    vector<vector<string>> competitions = {{"HTML",   "C#"},
                                           {"C#",     "Python"},
                                           {"Python", "HTML"}};
    vector<int> results = {0,0,1};

    cout << tournamentWinner1(competitions, results) << endl;

    return 0;
}
