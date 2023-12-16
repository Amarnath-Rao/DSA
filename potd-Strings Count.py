#User function Template for python3

class Solution:
    def countStr(self, n):
        ans = 0

        for i in range(2):
            for j in range(3):
                if i + j > n:
                    continue

                curans = 1
                total = n
                if j == 2:
                    curans = (total * (total - 1)) // 2
                    total -= 2
                elif j:
                    curans = total
                    total -= 1

                if i:
                    curans *= total

                ans += curans

        return ans

        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        n = int(input())

        solObj = Solution()

        print(solObj.countStr(n))
# } Driver Code Ends