s=[1,1]
g=[1,2,3]
s=set(s)
g=set(g)
s=list(s)
g=list(g)
c=0
for j in range(len(s)):
    for i in range(len(g)):
        if s[j]>=g[i]:
            c+=1
print(c)