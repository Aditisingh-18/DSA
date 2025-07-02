/*

class Solution {
public:
    void backtrack(vector<int>& nums, int start, vector<vector<int>>& result) {
        if (start == nums.size()) {
            result.push_back(nums); // Store a valid permutation
            return;
        }

        for (int i = start; i < nums.size(); i++) { // Iterate from 'start' instead of '0'
            swap(nums[start], nums[i]); // Swap to fix an element at 'start'
            backtrack(nums, start + 1, result); // Recur for the next index
            swap(nums[start], nums[i]); // Backtrack to restore original order
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(nums, 0, result);
        return result;
    }
};
*/