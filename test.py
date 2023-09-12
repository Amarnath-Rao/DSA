oi = int(input())
for po in range(oi):
    ki = int(input())
    xcv = list(map(int, input().split()))
    cvi = set(range(ki + 1))
    for re in xcv:
        cvi.remove(re)
    while cvi:
        uio = min(cvi)
        print(uio)
        cvi.remove(uio)
        iuo = int(input())
        cvi.add(iuo)
    uio = min(cvi)
    print(uio)
    iuo = int(input())