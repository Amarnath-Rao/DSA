"""class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        vector<vector<int>> dp(n, vector<int> (m));
        
        for(int i = 0; i < n; i++){
            dp[i][m - 1] = M[i][m - 1];
        }
        
        for(int j = m - 2; j > -1; j--){
            for(int i = 0; i < n; i++){
                dp[i][j] = dp[i][j + 1];
                
                if(i > 0)
                    dp[i][j] = max(dp[i][j], dp[i - 1][j + 1]);
                if(i < n - 1)
                    dp[i][j] = max(dp[i][j], dp[i + 1][j + 1]);
                    
                dp[i][j] += M[i][j];
            }
        }
        
        int ans = 0;
        
        for(int i = 0; i < n; i++)
            ans = max(ans, dp[i][0]);
            
        return ans;
    }
};
"""

"""
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    vector<vector<ll>> dp(n + 1, vector<ll> (2, 0));
	    const ll mod = 1e9 + 7;
	    dp[n][0] = dp[n][1] = 1;
	    
	    for(int i = n - 1; i > -1; i--){
	        dp[i][1] = dp[i + 1][0];
	        
	        dp[i][0] = (dp[i + 1][1] + dp[i + 1][0]) % mod;
	    }
	    
	    return dp[0][0];
	}
};
"""