//
// Created by Rodrigo Asbun on 1/27/22.
//

#include "CppLeetCode.h"

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    unordered_map<int, int> hash;

    for (int i{0}; i < nums.size(); ++i) {
        int potentialMatch = target - nums[i];

        if (hash.find(potentialMatch) != hash.end())
            return vector<int>{hash[potentialMatch], i};
        else
            hash.insert({nums[i], i});
    }
    return {};
}

