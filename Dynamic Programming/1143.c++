class Solution {
public:
    // by recursion it gives tle;
    int lcs(int i, int j, string& s1, string& s2, vector<vector<int>>& dp) {
        if (i < 0 || j < 0)
            return 0;
        if (dp[i][j] != -1) {
            return dp[i][j]; // memorisation
        }
        if (s1[i] == s2[j])
            return 1 + lcs(i - 1, j - 1, s1, s2, dp);
        return dp[i][j] =
                   max(lcs(i - 1, j, s1, s2, dp), lcs(i, j - 1, s1, s2, dp));
    }

    int longestCommonSubsequence(string s1, string s2) {
        int i = s1.size();
        int j = s2.size();
        vector<vector<int>> dp(i, vector<int>(j, -1));
        return lcs(i - 1, j - 1, s1, s2, dp);
    }
};