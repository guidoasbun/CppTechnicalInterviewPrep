#include "CppAlgoE.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Test 1
    vector<int> vector1{3, 5, -4, 8, 11, 1, -1, 6};
    int targetSum{10};
    vector<int> result = twoNumberSum3(vector1, targetSum);

    printVector(result);


    return 0;
}
