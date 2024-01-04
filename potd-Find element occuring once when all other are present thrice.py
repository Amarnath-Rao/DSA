#User function Template for python3

class Solution:
    def singleElement(self, arr, n):
        mp = dict()
        for i in range(n):
            if arr[i] in mp.keys():
                mp[arr[i]] += 1
            else:
                mp[arr[i]] = 1
        for x in mp:
            if mp[x]==1:
                return x
                break


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