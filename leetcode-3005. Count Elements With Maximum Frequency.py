from collections import Counter
nums = [1,2,2,3,1,4]
c=Counter(nums)
m=max(c.values())
x=0
for i in c:
    if c[i]==m:
        x+=c[i]
print(x)