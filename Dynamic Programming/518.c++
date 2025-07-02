class Solution {
public:
//dp
    int call(vector<int>& coins, int i, int amount, vector<vector<int>>& dp) {
        if (amount == 0) return 1;
        if (amount < 0 || i < 0) return 0;
        
        if (dp[i][amount] != -1) return dp[i][amount];

        // Include coin[i] + Exclude coin[i]
        dp[i][amount] = call(coins, i, amount - coins[i], dp) + 
                        call(coins, i - 1, amount, dp);
        
        return dp[i][amount];
    }

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1)); // Correct size
        return call(coins, n - 1, amount, dp);
    }
};