prices = [7, 1, 5, 3, 6, 4]
cm = 0
m = 0
for i in range(len(prices)):
    cm = max(cm, cm + prices[i] - prices[i-1])
    m = max(m, cm)
print(m)