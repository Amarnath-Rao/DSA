from collections import Counter
s="egg"
t="add"
print(set(s))
print(set(t))
print(len(set(s)))
print(len(set(t)))
print(zip(s,t))
print(set(zip(s,t)))
print(len(set(zip(s,t))))
print(len(set(zip(s, t))) == len(set(s)) == len(set(t)))