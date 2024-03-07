from collections import Counter
s="xyyz"
c=Counter(s)
minv=min(c.values())
for i in c:
    if c[i]>minv:
        c[i]-=1
        break
print(all(c[i]==minv for i in c))