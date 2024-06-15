class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>>p;
        int n=profits.size();
        for(int i=0;i<n;i++){
            if(profits[i]>0) p.push_back({capital[i],profits[i]});
        }
        sort(p.begin(),p.end());
        priority_queue<int>pq;
        int ret=w;
        int cap=w;
        int j=0;
        for(int i=0;i<k;i++){
            while(j<p.size() && p[j].first<=cap){
                pq.push(p[j].second);
                j++;
            }
            if(pq.size()){
                cap+=pq.top();
                pq.pop();
            }
            ret=max(ret,cap);
        }
        return ret;
    }
};