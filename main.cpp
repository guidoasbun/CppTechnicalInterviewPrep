#include "CppAlgoE/CppAlgoE.h"
#include "HackerRank/HackerRank.h"

#include <iostream>
#include <vector>
#include "CppAlgoE/CppAlgoE.h"

using namespace std;

int main()
{
    vector<int> aVector = {-1, -1, 2, 3, 3, 3, 4};
    vector<int> bVector = sortedSquaredArray1(aVector);

    printVector(bVector);

    return 0;
}
