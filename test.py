from typing import List


class Solution:
    def findNthNumber(self, n : int, k : int ) -> int:
        low, high = 0, 10 ** 18
        self.dp = [[[-1] * 65 for _ in range(65)] for _ in range(2)]

        while low <= high:
            mid = low + (high - low) // 2
            count = self.find(mid, k)
            if count >= n:
                high = mid - 1
            else:
                low = mid + 1
        return low

    def find(self, n, k):
        s = format(n, 'b').zfill(64)
        self.reset()
        return self.dpf(s, len(s), 1, k)

    def dpf(self, s, n, tight, k):
        if k < 0:
            return 0
        if n == 0:
            return 1
        if self.dp[tight][k][n] is not None:
            return self.dp[tight][k][n]

        ub = int(s[len(s) - n]) if tight == 1 else 1
        ans = 0
        for dig in range(ub + 1):
            if dig == ub:
                ans += self.dpf(s, n - 1, tight, k - dig)
            else:
                ans += self.dpf(s, n - 1, 0, k - dig)
        self.dp[tight][k][n] = ans
        return ans

    def reset(self):
        for i in range(65):
            for j in range(65):
                self.dp[0][i][j] = None
                self.dp[1][i][j] = None


"""

int f(int i,int prev,string &str,int n,vector<vector<int>>&dp)
    {
        if(i==n)
        {
            return 1;
        }
        if(dp[i][prev] != -1)
        {
            return dp[i][prev];
        }
        int sum=0,ways=0;
        for(int ind=i;ind<n;ind++)
        {
            sum+=str[ind]-'0';
            if(sum >= prev)
            {
                ways+=f(ind+1,sum,str,n,dp);
            }
        }
        return dp[i][prev]=ways;
    }
    int TotalCount(string str){
        // Code here
        int n=str.size();
        vector<vector<int>> dp(n,vector<int>(900+1,-1));//since N is till 900 and max value of each digit is 9
        return f(0,0,str,n,dp);//dp[ind][prev] -> no of ways to reach ind with prev sum as prev
    }

"""