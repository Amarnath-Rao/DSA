w1=input()
w2=input()
w3=""
for i in range(min(len(w1),len(w2))):
    w3+=w1[i]+w2[i]
print(w3+w1[i+1:]+w2[i+1:])