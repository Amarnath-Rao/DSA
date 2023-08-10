def lcs(self,x,y,s1,s2):
        l=[[0 for i in range(y+1)] for i in range(x+1)]
        for i in range(x+1):
            for j in range(y+1):
                if i==0 or j==0:
                    l[i][j]=0
                elif s1[i-1]==s2[j-1]:
                    l[i][j]=l[i-1][j-1]+1
                else:
                    l[i][j]=max(l[i-1][j],l[i][j-1])

        index=l[x][y]
        lcs=['']*(index+1)
        lcs[index]=''
        i=x
        j=y
        while i>0 and j>0:
            if s1[i-1]==s2[j-1]:
                lcs[index-1]=s1[i-1]
                i-=1
                j-=1
                index-=1
            elif l[i-1][j]>l[i][j-1]:
                i-=1
            else:
                j-=1
        return len(''.join(lcs))       
        # code here