


int F(int n) {
    if (n == 0 || n == 1) return 1;
    if (dp[n] != 0) return dp[n];
    else { 
        dp[n] = f(n - 1) + f(n - 2);
        return dp[n];
    }
}