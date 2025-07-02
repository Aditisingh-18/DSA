class Solution {
public:
    int res(vector<int>& nums,int i ,int sum , int target){
        int n =nums.size();
        if(i==n){
            if(sum==target) return 1;
            return 0;
        }
        return res(nums,i+1,sum+nums[i],target)+
        res(nums,i+1,sum-nums[i],target);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return res(nums,0,0,target);
    }
    
};