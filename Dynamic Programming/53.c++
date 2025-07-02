class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        long long sum = 0;
        int maxi = INT_MIN; // To store the maximum sum
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            maxi = max(maxi, (int)sum);
            if (sum < 0) {
                sum = 0;
            }
        }
        
        return maxi; // Return the maximum sum
    }
};