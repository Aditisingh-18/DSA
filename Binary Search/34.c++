/*

class Solution {
public:
    int left_most(vector<int>&nums,int target ,int n ){
        int l=0;
        int r=n-1;
        int left=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                left=mid;
                r=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return left;
    }
    int right_most(vector<int>&nums,int target ,int n ){
        int l=0;
        int r=n-1;
        int right=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                right=mid;
                l=mid+1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return right;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n =nums.size();
        int lefty=left_most(nums,target,n);
        int righty=right_most(nums,target,n);
        return {lefty,righty};
    }
};

*/