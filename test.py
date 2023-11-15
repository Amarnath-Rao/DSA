s="hello"
v=set('aeiouAEIOU')
s=list(s)
i,j=0,len(s)-1
while i<j:
    if s[i] not in v:
        i+=1
    elif s[j] not in v:
        j-=1
    else:
        s[i],s[j]=s[j],s[i]
        i+=1
        j-=1
print(''.join(s))