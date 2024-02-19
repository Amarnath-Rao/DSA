class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        mp = collections.Counter(arr)
        v = list(mp.values())
        cnt = 0
        v.sort()
        for i in range(len(v)):
            if k > v[i]:
                k -= v[i]
                v[i] = 0
            else:
                v[i] -= k
                k = 0
            if v[i] != 0:
                cnt += 1
        return cnt



"""
int minValue(string s, int k){
        // code here
        priority_queue<int> pq;
        vector<int> alpha(26,0);
        for(int i = 0; i<(int)s.size(); i++){
            alpha[s[i]-'a']++;
        }
        for(auto i: alpha) pq.push(i);
        while(k){
            int high = pq.top();
            high--;
            k--;
            pq.pop();
            pq.push(high);
        }
        int ans = 0;
        while(pq.size()){
            ans += pq.top()*pq.top();
            pq.pop();
        }
        return ans;
    }

"""