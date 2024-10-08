import math
def fact(n):
    if n<=0: return 0
    if n==1: return 1
    return n*fact(n-1)
def fsum(n):
    x=0
    for i in str(n):
        x+=fact(int(i))
    return x
a=[1,2,3,145]
for i in a:
    if fsum(i)==i:
        print(i," ")