#include "CppAlgoE/CppAlgoE.h"
#include "HackerRank/HackerRank.h"
#include "LeetCode/CppLeetCode.h"

#include <iostream>
#include <vector>
#include "CppAlgoE/CppAlgoE.h"

using namespace std;

int main() {
    vector<int> aVector = {2,7,11,15};

    vector<int> result = twoSum(aVector, 9);

    printVector(result);

}
