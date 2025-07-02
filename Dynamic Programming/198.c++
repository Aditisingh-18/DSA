class Solution {
public:
    int Call_rob(vector<int>& nums,int i,vector<int>&f) {
        int n =nums.size();
        if(i>=n) return 0;
        if(f[i]!=-1) return f[i];
        int p1=nums[i]+Call_rob(nums,i+2,f);
        int p2=Call_rob(nums,i+1,f);
        return f[i]=max(p1,p2);
    }
    int rob(vector<int>&nums){
        vector<int> f(nums.size(),-1);
        return Call_rob(nums,0,f);
    }
};