def max_ones_after_flip(n, coins):
    max_ones = 0

    for i in range(n):
        for j in range(i, n):
            # Simulate flipping operation
            flipped_coins = coins[:i] + [1 - x for x in coins[i:j+1]] + coins[j+1:]
            
            # Count the number of ones
            ones_count = sum(flipped_coins)
            
            # Update the maximum count
            max_ones = max(max_ones, ones_count)

    return max_ones

# Sample Input
n = int(input().strip())
coins = list(map(int, input().split()))

# Get and print the result
result = max_ones_after_flip(n, coins)
print(result)
