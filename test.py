from collections import defaultdict
from queue import Queue

class Solution:
    def findCheapestPrice(self, n: int, flights: List[List[int]], src: int, dst: int, k: int) -> int:
        adj = defaultdict(list)
        for flight in flights:
            adj[flight[0]].append((flight[1], flight[2]))

        dist = [float('inf')] * n
        dist[src] = 0

        q = Queue()
        q.put((src, 0))
        stops = 0

        while not q.empty() and stops <= k:
            sz = q.qsize()
            for _ in range(sz):
                node, distance = q.get()

                if node not in adj: continue

                for neighbour, price in adj[node]:
                    if price + distance >= dist[neighbour]: continue
                    dist[neighbour] = price + distance
                    q.put((neighbour, dist[neighbour]))

            stops += 1

        return dist[dst] if dist[dst] != float('inf') else -1


"""

class Solution
{
    public:
    int fun(int n,vector<int>&dp)
    {
        if(n==0)
        return 0;
        if(dp[n]!=-1)return dp[n];
        return dp[n]=max(n,max(n/2,fun(n/2,dp))+max(n/3,fun(n/3,dp))+max(n/4,fun(n/4,dp)));
        
        
    }
        int maxSum(int n)
        {
            //code here.
            vector<int>dp(n+1,-1);
            return fun(n,dp);
            
        }
};


"""