class Solution:
    def balancedStringSplit(self, s: str) -> int:
        c=ss=0
        for i in s:
            c+=1 if i=='L' else -1
            if(c==0):
                ss+=1
        return ss