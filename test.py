"""

class Solution{
public:
    void solve(int n,vector<int> &ans,unordered_map<int,int> &m,vector<int> &dp){
        if(dp[n]!=-1){
            ans.push_back(dp[n-1]);
            return;
        }
        solve(n-1,ans,m,dp);
        //dp[n] = m.find(dp[n-1]-n)!=m.end()?dp[n-1]-n:dp[n-1]+n;
        if(dp[n-1]-n>0 && m.find(dp[n-1]-n)==m.end()){
            dp[n] = dp[n-1]-n;
        }
        else{
            dp[n] = dp[n-1]+n;
        }
        m[dp[n]]++;
        ans.push_back(dp[n]);
    }
    vector<int> recamanSequence(int n){
        // code here
        vector<int>ans;
        unordered_map<int,int>m;
        vector<int>dp(n,-1);
        dp[0]=0;
        m[0]++;
        solve(n-1,ans,m,dp);
        return ans;
    }
};
 

"""