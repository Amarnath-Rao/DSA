#User function Template for python3

class Solution:
    def DivisibleByEight(self,s):
        if len(s)<=2 :
            s = int(s)
        else:
            s = int(s[-3:])
        return 1 if s%8==0 else -1
        #code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        S=input()
        ob=Solution()
        print(ob.DivisibleByEight(S))
# } Driver Code Ends