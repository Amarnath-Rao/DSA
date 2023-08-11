#User function Template for python3

class Solution:
    def count(self, coins, N, Sum):
        def solve(i,curSum,coins,Sum,dp):
            if(curSum==Sum):
                dp[i][curSum]=1
                return dp[i][curSum]
                
            if(i==len(coins)):
                dp[i][curSum]=0
                return dp[i][curSum]
            
            if(dp[i][curSum]!=-1): return dp[i][curSum]
            
            if(curSum+coins[i]<=Sum):
                dp[i][curSum]=solve(i,curSum+coins[i],coins,Sum,dp) + solve(i+1,curSum,coins,Sum,dp)
                return dp[i][curSum]
            
            dp[i][curSum]=solve(i+1,curSum,coins,Sum,dp)
            return dp[i][curSum]
        

        dp=[[-1 for j in range(Sum+1)] for i in range(N+1)]
        return solve(0,0,coins,Sum,dp)



#{ 
 # Driver Code Starts
#Initial Template for Python 3

import sys
sys.setrecursionlimit(10**6)

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        sum,N = list(map(int, input().strip().split()))
        coins = list(map(int, input().strip().split()))
        ob = Solution()
        print(ob.count(coins,N,sum))

# } Driver Code Ends