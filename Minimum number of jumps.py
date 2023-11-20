def fn(a,n):
    if n<=1:
        return 0
    if a[0]==0:
        return -1
    maxr=a[0]
    s=a[0]
    j=1
    for i in range(1,n):
        if i==n-1:
            return j
        maxr=max(maxr,i+a[i])
        s-=1
        if s==0:
            j+=1
            if i>=maxr:
                return -1
            s=maxr-i
        return -1

if __name__=="__main__":
    n=11
    a=[1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9]
    print(fn(a,n))