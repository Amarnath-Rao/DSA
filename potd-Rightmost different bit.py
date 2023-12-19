def posOfRightMostDiffBit(m, n):
    # Finding XOR of both numbers to get bits that are different
    xor_result = m ^ n
    
    # If both numbers are the same, return -1
    if xor_result == 0:
        return -1
    
    # Find the rightmost set bit in the XOR result
    position = 1
    while xor_result:
        if xor_result & 1:
            return position
        xor_result >>= 1
        position += 1
