#User function Template for python3

class Solution:
    def search(self, pattern, text):
        n, m = len(text), len(pattern)
        res = []
        for i in range(n - m + 1):
            if text[i:i+m] == pattern:
                res.append(i + 1)  # 1-based index
        return res


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        patt = input().strip()
        ob = Solution()
        ans = ob.search(patt, s)
        for value in ans:
            print(value,end = ' ')
        print()
# } Driver Code Ends