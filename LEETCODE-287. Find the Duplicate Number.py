a = [1, 3, 4, 2, 2]
s = a[0]
f = a[0]
while True:
    s=a[s]
    f=a[a[f]]
    if s==f:
        break

s=a[0]
while s!=f:
    s=a[s]
    f=a[f]
print(s)