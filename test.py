class Solution:   
    def peakElement(self,a, n):
        # Code here
        if n==1: return 0
        l=0
        h=n-1
        while(l<h):
            m=l+((h-l)>>1)
            if a[m]>=a[m+1]:
                h=m
            else:
                l=m+1
        return l