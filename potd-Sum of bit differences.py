def sumBitDifferences(self,arr, n):
    total_sum = 0
    for i in range(len(arr)):
        for j in range(len(arr)):
            b1 = bin(arr[i]).lstrip('0b')
            b2 = bin(arr[j]).lstrip('0b')
            length_diff = abs(len(b1) - len(b2))
            if len(b1) < len(b2):
                b1 = '0' * length_diff + b1
            else:
                b2 = '0' * length_diff + b2            
            bit_diff = sum([1 for x, y in zip(b1, b2) if x != y])            
            total_sum += bit_diff
    return total_sum

def sumBitDifferences(self,arr, n):
    result = 0
    for i in range(32):
        countOne = 0
        countZeros = 0
        for j in range(n):
            if arr[j] & (1 << i):
                countOne += 1
            else:
                countZeros += 1
        result += countOne * (countZeros) * 2
    return result
