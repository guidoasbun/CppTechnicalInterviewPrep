//
// Created by Guido Asbun on 9/30/21.
//

#include "CppAlgoE.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <unordered_map>

using namespace std;

void printVector(const std::vector<int> &vector) {
    size_t vectorLength{vector.size()};
    if (vectorLength <= 0)
        cout << "Vector is empty";
    for (size_t i{0}; i < vectorLength; ++i) {
        cout << vector[i] << " ";
    }
}

//Two Number Sum
vector<int> twoNumberSum1(const vector<int> &array, int targetSum) {
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

vector<int> twoNumberSum2(const vector<int> &array, int targetSum) {
    // O(n) time | O(n) space
    // Using Hash table
    unordered_set<int> nums;
    for (int num: array) {
        int potentialMatch = targetSum - num;
        if (nums.find(potentialMatch) != nums.end())
            return vector<int>{potentialMatch, num};
        else
            nums.insert(num);
    }
    return {};
}

vector<int> twoNumberSum3(vector<int> array, int targetSum) {
    // O(nlog(n)) | O(1) space
    sort(array.begin(), array.end());
    int leftPtr{0};
    size_t rightPtr{array.size() - 1};
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

bool isValidSubSequence(const vector<int> &array, const vector<int> &sequence) {
    // Time = O(N) | Space = O(1)
    // While loop implementation
    int arrayIdx{0};
    int seqIdx{0};
    while (arrayIdx < array.size() && seqIdx < sequence.size()) {
        if (array[arrayIdx] == sequence[seqIdx])
            seqIdx++;
        arrayIdx++;
    }
    return seqIdx == sequence.size();
}

bool isValidSubSequence2(const vector<int> &array, const vector<int> &sequence) {
    // Time = O(N) | Space = O(1)
    // For loop implementation
    int seqIdx{0};
    for (auto value: array) {
        if (seqIdx == sequence.size())
            break;
        if (sequence[seqIdx] == value)
            seqIdx++;
    }
    return seqIdx == sequence.size();
}

//************************ Sorted Squared Array *************************

vector<int> sortedSquaredArray1(const vector<int> &array) {
    // Un-optimal
    // Time = O(n log n) | Space = O(n)
    vector<int> sortedSquares(array.size());
    for (int i{0}; i < array.size(); ++i) {
        int value = array[i];
        sortedSquares[i] = (value * value);
    }

    sort(sortedSquares.begin(), sortedSquares.end());
    return sortedSquares;
}

vector<int> sortedSquaredArray2(const vector<int> &array) {
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
        } else {
            sortedSquares[i] = largeVal * largeVal;
            rightPtr--;
        }
    }
    return sortedSquares;
}

//************************ Tournament Winner *************************
// Time = O(n) | Space = O(k)
string tournamentWinner1(const vector<vector<string>> &competitions,
                         const vector<int> &results) {
    const int HOME_TEAM_WON{1};

    string currentBestTeam;
    unordered_map<string, int> scores = {{currentBestTeam, 0}};

    for (size_t i{0}, size{competitions.size()}; i < size; ++i) {
        auto result = results[i];
        auto competition = competitions[i];
        auto homeTeam = competition[0];
        auto awayTeam = competition[1];
        auto winningTeam = result == HOME_TEAM_WON ? homeTeam : awayTeam;

        updateScores(winningTeam, 3, scores);

        if (scores[winningTeam] > scores[currentBestTeam]) {
            currentBestTeam = winningTeam;
        }
    }

    return currentBestTeam;
}

void updateScores(const string &team, int points, unordered_map<string, int> &scores) {
    if (scores.find(team) == scores.end())
        scores[team] = 0;

    scores[team] += points;
}

//************************ Non-Constructable Change *************************
// Time = O(n log n) | Space = O(1) sorted in space, or O(n) if not sorted in space
int nonConstructableChange(std::vector<int>& coins){
    sort(coins.begin(), coins.end());
    int currentChangeCreated{0};

    for (int coin : coins) {
        if (coin > currentChangeCreated + 1)
            return currentChangeCreated + 1;

        currentChangeCreated += coin;
    }

    return currentChangeCreated + 1;
}


