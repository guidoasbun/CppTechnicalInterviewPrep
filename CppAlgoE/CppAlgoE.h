//
// Created by Rodrigo Asbun on 9/30/21.
//

#ifndef CPPTECHNICALINTERVIEWPREP_CPPALGOE_H
#define CPPTECHNICALINTERVIEWPREP_CPPALGOE_H

#include <vector>

void printVector(const std::vector<int>& vector);

//Two Number Sum
std::vector<int> twoNumberSum1(const std::vector<int>& array, int targetSum);
std::vector<int> twoNumberSum2(const std::vector<int>& array, int targetSum);
std::vector<int> twoNumberSum3(std::vector<int> array, int targetSum);

//Validate Subsequence
bool isValidSubSequence(const std::vector<int>& array, const std::vector<int>& sequence);
bool isValidSubSequence2(const std::vector<int>& array, const std::vector<int>& sequence);

//Sorted Squared Array
std::vector<int> sortedSquaredArray1(const std::vector<int>& array);
std::vector<int> sortedSquaredArray2(const std::vector<int>& array);

#endif //CPPTECHNICALINTERVIEWPREP_CPPALGOE_H
