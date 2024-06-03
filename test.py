s = "coaching"
t = "coding"
x=""
y=""
for i in s:
    for j in t:
        if i!=j:
            x+=i
            break
        elif j!=i:
            y+=j
            break
print(x)
print(" ")
print(y)