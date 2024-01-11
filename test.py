class Solution:
    def longSubarrWthSumDivByK(self, arr, n, k):
        sum = 0
        suffix = {0: n}
        ans = 0
        for i in range(n - 1, -1, -1):
            sum = (sum + (arr[i] % k) + k) % k

            if sum not in suffix:
                suffix[sum] = i
            else:
                ans = max(ans, suffix[sum] - i)
        return ans
    
"""
class Solution {
  public:
    string removeKdigits(string S, int K) {
        pair<int, int> last = {0, K};
        int n = S.size();
        int index = 0;
        
        while(index < n){
            if(S[index] != '0'){
                if(K)
                    --K;
                else
                    break;
                    
                ++index;
            }
            else{
                while(index < n and S[index] == '0'){
                    ++index;
                }
                
                last = {index, K};
            }
        }
        
        stack<int> num;
        int start = last.first;
        K = last.second;
        
        for(int i = start; i < n; i++){
            while(num.size() and num.top() > (S[i] - '0') and K){
                --K;
                num.pop();
            }
            
            num.push(S[i] - '0');
        }
        
        while(num.size() and K--){
            num.pop();
        }
        
        string ans = "";
        
        while(num.size()){
            ans += to_string(num.top());
            num.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        if(ans == "")
            ans = "0";
        
        return ans;
    }
};
"""