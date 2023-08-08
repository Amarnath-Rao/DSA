import collections
import math
n=int(input())
numerator = list(map(int,input().split()))
denominator = list(map(int,input().split()))
f=collections.ChainMap(numerator, denominator)
c=0
for i in range(0,n):
    gcd=math.gcd(numerator[i],denominator[i])
    numerator[i]/=gcd
    denominator[i]/=gcd
    x=y=0
    x=numerator[i]
    y=denominator[i]
    z=y-x
    if(f.count({z,y})):
        c+=1