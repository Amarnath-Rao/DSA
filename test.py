s = "1100"
r = 2
n = 3
for _ in range(r):
    s = ''.join(['10' if char == '1' else '01' for char in s])
print(s[n])