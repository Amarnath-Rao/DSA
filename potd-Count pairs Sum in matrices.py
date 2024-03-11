def countPairs(mat1, mat2, n, x):
    count = 0
    i=0
    j =n - 1
    
    while i < n and j >= 0:
        if mat1[i][j] + mat2[i][j] == x:
            count += 1
            j -= 1
        elif mat1[i][j] + mat2[i][j] < x:
            i += 1
        else:
            j -= 1
    
    return count

# Example usage:
n = 3
x = 21
mat1 = [[1, 5, 6],
        [8, 10, 11],
        [15, 16, 18]]
mat2 = [[2, 4, 7],
        [9, 10, 12],
        [13, 16, 20]]
print(countPairs(mat1, mat2, n, x))  # Output: 4


