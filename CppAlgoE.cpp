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

vector<int> twoNumberSum1(const vector<int>& array, int targetSum)
{
    // O(n^2) time | O(1) space
    size_t arrayLength{array.size()};
    for (size_t i{0}; i < arrayLength - 1; ++i)
    {
        int firstNum = array[i];
        for (size_t j{i + 1}; j < arrayLength; ++j)
        {
            int secondNum = array[j];
            if (firstNum + secondNum == targetSum)
            {
                return vector<int>{firstNum, secondNum};
            }
        }
    }
    return {};
}

vector<int> twoNumberSum2(const vector<int>& array, int targetSum)
{
    // O(n) time | O(n) space
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
    int left{0};
    size_t right {array.size() - 1};
    while (left < right)
    {
        int currentSum = array[left] + array[right];
        if (currentSum == targetSum)
            return {array[left], array[right]};
        else if (currentSum < targetSum)
            left++;
        else if (currentSum > targetSum) {
            right--;
        }
    }
    return {};
}

bool isValidSubSequence(const vector<int>& array, const vector<int>& sequence)
{
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
    int seqIdx{0};
    for (auto value : array) {
        if (seqIdx == sequence.size())
            break;
        if (sequence[seqIdx] == value)
            seqIdx++;
    }
    return seqIdx == sequence.size();
}
