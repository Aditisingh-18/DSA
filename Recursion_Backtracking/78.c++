/*

class Solution {
public:
    vector<vector<int>> result;

    void backtrack(vector<int>& nums, vector<int>& temp, int start) {
        result.push_back(temp); // Add current subset to the result

        for (int i = start; i < nums.size(); i++) {
            temp.push_back(nums[i]);  // Include current element
            backtrack(nums, temp, i + 1);  // Recurse for the next element
            temp.pop_back();  // Backtrack (remove last element)
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        backtrack(nums, temp, 0);
        return result;
    }
};

*/