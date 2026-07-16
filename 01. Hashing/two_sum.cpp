/*
Problem: Two Sum
LeetCode: 1

Pattern:
Hashing

Difficulty:
Easy

Approaches:
1. Brute Force
2. Optimal

Time Complexity:
Brute Force: O(n²)
Optimal: O(n)

Space Complexity:
Brute Force: O(1)
Optimal: O(n)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {

            int moreNeeded = target - nums[i];

            if (mpp.find(moreNeeded) != mpp.end()) {
                return {mpp[moreNeeded], i};
            }

            mpp[nums[i]] = i;
        }

        return {-1, -1};
    }
};
