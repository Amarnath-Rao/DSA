#User function Template for python3

class Solution:
    def nthCharacter(self, s, r, n):
        # code here
        for _ in range(r):
            s = ''.join(['10' if char == '1' else '01' for char in s])
        return s[n]

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        snr = input().split()
        S, R, N = snr[0], int(snr[1]), int(snr[2])
        ob = Solution()
        print(ob.nthCharacter(S, R, N))
# } Driver Code Ends