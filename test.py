class Solution:
    def rangeBitwiseAnd(self, left: int, right: int) -> int:
        cnt = 0
        while left != right:
            left >>= 1
            right >>= 1
            cnt += 1
        return left << cnt

"""

class Solution
{
    public:
    int subsequenceCount(string s, string t)
    {
    int n=s.length(),m=t.length();
      int mod=1e9+7;
      vector<vector<int>>dp(n+1,vector<int>(m+1,0));
      for(int i=0;i<n;i++)dp[i][0]=1;
      for(int i=1;i<=n;i++){
          for(int j=1;j<=m;j++){
              if(s[i-1]==t[j-1])dp[i][j]=dp[i-1][j-1];
              dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
          }
      }
      return dp[n][m];
    }
};



"""