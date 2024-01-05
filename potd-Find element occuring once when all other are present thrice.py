#User function Template for python3

class Solution:
    def singleElement(self, arr, n):
        from collections import Counter
        mp = Counter(arr)
        for i in mp:
            if mp[i].values==1:
                return mp[i].keys


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        arr=list(map(int,input().split()))
        
        ob = Solution()
        print(ob.singleElement(arr,N))
# } Driver Code Ends