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
class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        
        int remaining = q.size() - k; //2
        stack<int> st;
        while(k--) {
            st.push(q.front());
            q.pop();
        }
        
        while(!st.empty()) {
            q.push(st.top());
            st.pop();
        }
        
        while(remaining--) {
            q.push(q.front());
            q.pop();
        }
        
        return q;
    }
};
"""