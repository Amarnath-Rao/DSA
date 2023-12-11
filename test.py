def max_crossing_subarray(arr, low, mid, high):
    left_sum = float('-inf')
    sum_temp = 0

    for i in range(mid, low - 1, -1):
        sum_temp += arr[i]
        left_sum = max(left_sum, sum_temp)

    right_sum = float('-inf')
    sum_temp = 0

    for i in range(mid + 1, high + 1):
        sum_temp += arr[i]
        right_sum = max(right_sum, sum_temp)

    return left_sum + right_sum


def max_subarray(arr, low, high):
    if low == high:
        return arr[low]

    mid = (low + high) // 2

    left_sum = max_subarray(arr, low, mid)
    right_sum = max_subarray(arr, mid + 1, high)
    cross_sum = max_crossing_subarray(arr, low, mid, high)

    return max(left_sum, right_sum, cross_sum)


# Example usage:
arr = [-2, -3, 4, -1, -2, 1, 5, -3]
n = len(arr)
result = max_subarray(arr, 0, n - 1)
print("Maximum Subarray Sum:", result)
