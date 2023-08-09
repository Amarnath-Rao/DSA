import math

def func(N):
    def prime(k):
        if(k==2):
            return True
        for i in range(2,int(math.sqrt(k))+1):
            if(k%i==0): return False
        return True
    
    if(prime(N)): return N

    s=-1
    for i in range(2,int(math.sqrt(N))+1):
        if(N%i==0):
            if(prime(i)): s=max(s,i)
            if(prime(N/i)): s=max(s,N/i)
    return int(s)

if __name__=="__main__":
    t=int(input())
    print(func(t))