n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
maxa = max(a)
minb = min(b)
c=0
for i in range(maxa,minb+1):
    if all(i%ai==0 for ai in a) and all(bi%i==0 for bi in b):
        c+=1
print(c)