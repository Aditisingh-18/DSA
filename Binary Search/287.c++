/*

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int left = 1, right = nums.size() - 1; 

    while (left < right) {  // Binary search on number range
        int mid = left + (right - left) / 2;
        int count = 0;

        // Count how many numbers are <= mid
        for (int num : nums) {
            if (num <= mid)
                count++;
        }

        if (count > mid) 
            right = mid;  // Duplicate is in the lower half
        else 
            left = mid + 1;  // Duplicate is in the upper half
    }
    
    return left;  // The duplicate number
}
};


*/