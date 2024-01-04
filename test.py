class Solution:
    def singleElement(self, arr, N):
        # code here 
        mp = dict()
 
    # Traverse through array elements 
    # and count frequencies
        for i in range(n):
            if arr[i] in mp.keys():
                mp[arr[i]] += 1
            else:
                mp[arr[i]] = 1
             
    # Traverse through map and print 
    # frequencies
        for x in mp:
            if mp[x]==1:
                return x
                break
 
# Driver code
arr = [1,10,1,1 ]
n = len(arr)
countFreq(arr, n)