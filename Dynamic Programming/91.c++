class Solution {
public:
    int call(string &s, int i, vector<int>&dp) {
        if (i == s.size())
            return 1;
        if (s[i] == '0')  // Fixed character comparison
            return 0;
        if(dp[i]!=-1){
            return dp[i];
        }
        int ways = call(s, i + 1,dp);
        
        if (i + 1 < s.size() && (s[i] == '1' || (s[i] == '2' && s[i + 1] <= '6'))) {
            ways += call(s, i + 2,dp);
        }
        
        return dp[i]=ways;
    }

    int numDecodings(string s) {
        vector<int>dp(s.size(),-1);
        return call(s, 0,dp);  // Fixed missing return statement
    }
};