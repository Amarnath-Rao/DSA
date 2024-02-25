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
   long long f(int ind, vector<int> & vals, long long n, vector<vector<int>> & dp){
        if(ind<0) return 0;
        if(n==0) return 1;
        if(dp[ind][n]!=-1) return dp[ind][n];
        int pick=0, notPick=0;
        if(vals[ind]<=n){
            pick=f(ind, vals, n-vals[ind], dp);
        }
        notPick=f(ind-1, vals, n, dp);
        return dp[ind][n] = pick+notPick;
    }
    long long int count(long long int n)
    {
        vector<int> vals={3,5,10};
        vector<vector<int>> dp(3, vector<int>(n+1, -1));
        return f(2, vals, n, dp);
    }
};

"""