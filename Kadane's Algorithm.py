a=[-2, 1, -3, 4, -1, 2, 1, -5, 4]
n=9
m=cm=a[0]
for i in range(1,n):
    cm=max(a[i],a[i]+cm)
    m=max(cm,m)
print(m)