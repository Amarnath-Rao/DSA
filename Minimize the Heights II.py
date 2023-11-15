def fun(a,n,k):
    a.sort()
    v=a[-1]-a[0]
    for i in range(n-1):
        if a[i+1]<k:
            continue
        mav=max(a[i]+k,a[-1]-k)
        miv=min(a[0]+k,a[i+1]-k)
        v=min(v,mav-miv)
    return v

a=[1, 5, 8, 10]
k=2
n=4
print(fun(a,n,k))