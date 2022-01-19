//
// Created by Rodrigo Asbun on 9/30/21.
//

#include "CppAlgoE.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

void printVector(const std::vector<int>& vector)
{
    size_t vectorLength {vector.size()};
    if (vectorLength <= 0)
        cout << "Vector is empty";
    for (size_t i{0}; i < vectorLength; ++i)
    {
        cout << vector[i] << " ";
    }
}
//Two Number Sum
vector<int> twoNumberSum1(const vector<int>& array, int targetSum)
{
    // O(n^2) time | O(1) space
    // Using two for loops
    size_t arrayLength{array.size()};
    for (size_t i{0}; i < arrayLength - 1; ++i) {
        int firstNum = array[i];
        for (size_t j{i + 1}; j < arrayLength; ++j) {
            int secondNum = array[j];
            if (firstNum + secondNum == targetSum) {
                return vector<int>{firstNum, secondNum};
            }
        }
    }
    return {};
}

vector<int> twoNumberSum2(const vector<int>& array, int targetSum)
{
    // O(n) time | O(n) space
    // Using Hash table
    unordered_set<int> nums;
    for (int num : array) {
        int potentialMatch = targetSum - num;
        if (nums.find(potentialMatch) != nums.end())
            return vector<int>{potentialMatch, num};
        else
            nums.insert(num);
    }
    return {};
}

vector<int> twoNumberSum3(vector<int> array, int targetSum)
{
    // O(nlog(n)) | O(1) space
    sort(array.begin(), array.end());
    int leftPtr{0};
    size_t rightPtr {array.size() - 1};
    while (leftPtr < rightPtr) {
        int currentSum = array[leftPtr] + array[rightPtr];
        if (currentSum == targetSum)
            return {array[leftPtr], array[rightPtr]};
        else if (currentSum < targetSum)
            leftPtr++;
        else if (currentSum > targetSum) {
            rightPtr--;
        }
    }
    return {};
}

//************************ Validate Subsequence *************************

bool isValidSubSequence(const vector<int>& array, const vector<int>& sequence)
{
    // Time = O(N) | Space = O(1)
    // While loop implementation
    int arrayIdx{0};
    int seqIdx{0};
    while (arrayIdx < array.size() && seqIdx < sequence.size())
    {
        if (array[arrayIdx] == sequence[seqIdx])
            seqIdx++;
        arrayIdx++;
    }
    return seqIdx == sequence.size();
}

bool isValidSubSequence2(const vector<int>& array, const vector<int>& sequence)
{
    // Time = O(N) | Space = O(1)
    // For loop implementation
    int seqIdx{0};
    for (auto value : array) {
        if (seqIdx == sequence.size())
            break;
        if (sequence[seqIdx] == value)
            seqIdx++;
    }
    return seqIdx == sequence.size();
}

//************************ Sorted Squared Array *************************

vector<int> sortedSquaredArray1(const vector<int>& array)
{
    // Un-optimal
    // Time = O(n log n) | Space = O(n)
    vector<int> sortedSquares(array.size());
    for (int i{0}; i < array.size(); ++i) {
        int value = array[i];
        sortedSquares[i] = (value*value);
    }

    sort(sortedSquares.begin(), sortedSquares.end());
    return sortedSquares;
}

vector<int> sortedSquaredArray2(const vector<int>& array)
{
    // Time = O(n log n) | Space = O(n)
    vector<int> sortedSquares(array.size());
    int leftPtr{0};
    int rightPtr = array.size() - 1;

    for (int i = array.size() - 1; i >= 0; --i) {
        int smallVal = array[leftPtr];
        int largeVal = array[rightPtr];

        if (abs(smallVal) > abs(largeVal)) {
            sortedSquares[i] = smallVal * smallVal;
            leftPtr++;
        }
        else {
            sortedSquares[i] = largeVal * largeVal;
            rightPtr--;
        }
    }
    return sortedSquares;
}