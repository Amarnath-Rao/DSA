def search(text, pattern):
    n, m = len(text), len(pattern)
    res = []
    for i in range(n - m + 1):
        if text[i:i+m] == pattern:
            res.append(i + 1)  # 1-based index
    return res

text = "geeksforgeeks"
pattern = "geek"
print(search(text, pattern))