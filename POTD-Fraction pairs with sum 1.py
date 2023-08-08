from math import gcd
from collections import defaultdict

class Solution:
    def countFractions(self, n, numerator, denominator):
        f = defaultdict(int)
        ans = 0

        for i in range(n):
            x = numerator[i]
            y = denominator[i]
            gcd_val = gcd(x, y)
            x //= gcd_val
            y //= gcd_val
            xx = y - x
            yy = y

            if (xx, yy) in f:
                ans += f[(xx, yy)]

            f[(x, y)] += 1

        return ans


#{ 
 # Driver Code Starts

#Initial Template for Python 3

for _ in range(int(input())):
    n = int(input())
    numerator = list(map(int,input().split()))
    denominator = list(map(int,input().split()))
    ob = Solution()
    print(ob.countFractions(n,numerator,denominator))
# } Driver Code Ends