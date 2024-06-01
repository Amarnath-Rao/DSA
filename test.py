from collections import Counter
a=[1,2,1,3,2,5]
x=[]
c=Counter(a)
for i,k in c.items():
    if k==1:
        x.append(i)
print(x)