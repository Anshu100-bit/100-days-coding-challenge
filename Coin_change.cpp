class Solution {
  public:
    long long int count(int coins[], int n, int sum) {

        vector<vector<long long int>> dp(n + 1, vector<long long int>(sum + 1, 0));
        for (int i = 0; i <= n; ++i)
            dp[i][0] = 1;

        // Fill the dp table
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j <= sum; ++j) {
                dp[i][j] = dp[i - 1][j]; 
                if (j >= coins[i - 1]) {
                    dp[i][j] += dp[i][j - coins[i - 1]]; 
                }
            }
        }

        return dp[n][sum];
    }
};
