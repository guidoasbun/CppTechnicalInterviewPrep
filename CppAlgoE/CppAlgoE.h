//
// Created by Guido Asbun on 9/30/21.
//

#ifndef CPPTECHNICALINTERVIEWPREP_CPPALGOE_H
#define CPPTECHNICALINTERVIEWPREP_CPPALGOE_H

#include <vector>
#include <unordered_map>

void printVector(const std::vector<int> &vector);

//T wo Number Sum
std::vector<int> twoNumberSum1(const std::vector<int> &array, int targetSum);

std::vector<int> twoNumberSum2(const std::vector<int> &array, int targetSum);

std::vector<int> twoNumberSum3(std::vector<int> array, int targetSum);

// Validate Subsequence
bool isValidSubSequence(const std::vector<int> &array, const std::vector<int> &sequence);

bool isValidSubSequence2(const std::vector<int> &array, const std::vector<int> &sequence);

// Sorted Squared Array
std::vector<int> sortedSquaredArray1(const std::vector<int> &array);

std::vector<int> sortedSquaredArray2(const std::vector<int> &array);

// Tournament Winner
std::string tournamentWinner1(const std::vector<std::vector<std::string>> &competitions,
                              const std::vector<int> &results);

void updateScores(const std::string &team, int points, std::unordered_map<std::string, int> &scores);

// Non-Constructable Change
int nonConstructableChange(std::vector<int>& coins);
#endif //CPPTECHNICALINTERVIEWPREP_CPPALGOE_H
