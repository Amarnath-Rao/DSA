arr.sort()
d=None;m=None
for i in range(n-1):
    if arr[i]==arr[i+1]:
        d=arr[i]
    if arr[i+1]-arr[i]>2:
        m=arr[i]+1
if arr[0]!=1:
    m=1
elif arr[n-1]!=n:
    m=n
print(d,m)