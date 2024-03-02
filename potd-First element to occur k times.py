class Solution:
    def firstElementKTime(self, n, k, a):
        # code here
        d={}
        x=1
        for i in a:
            if i not in d.keys():
                d[i]=x
            else:
                d[i]+=1
            if d[i]==k:
                return i
        else:
            return -1