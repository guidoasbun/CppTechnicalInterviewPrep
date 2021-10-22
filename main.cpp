#include "CppAlgoE.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Test 1
    vector<int> vector1{5, 1, 22, 25, 6, -1, 8, 10};
    vector<int> vector2{1, 6, -1, 10};


    cout << isValidSubSequence2(vector1, vector2) << endl;



    return 0;
}
