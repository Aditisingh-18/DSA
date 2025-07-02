
class Solution {
public:


    void helper(vector<int>& arr, int idx, int target, vector<vector<int>> &ans, vector<int> &combin){
        // edge/base cases
        if(idx==arr.size()|| target < 0) return;
        if(target==0) {
        ans.push_back({combin});
        return;
        }

        combin.push_back(arr[idx]);
        //include unique elements
        helper(arr,idx,target-arr[idx],ans,combin);
        combin.pop_back();
        //exclude elements
        helper(arr,idx+1,target,ans,combin);
    }




    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> combin;
        helper(arr,0,target,ans,combin);
        return ans;
    } 
};