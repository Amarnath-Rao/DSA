def max_subarray_sum(arr):
    max_so_far = arr[0]
    max_ending_here = arr[0]
    start = end = 0
    s = 0

    for i in range(1, len(arr)):
        if arr[i] > max_ending_here + arr[i]:
            max_ending_here = arr[i]
            s = i
        else:
            max_ending_here += arr[i]

        if max_ending_here > max_so_far:
            max_so_far = max_ending_here
            start = s
            end = i

    return max_so_far, arr[start:end+1]

# Test the function
arr = [1,2,3]
max_sum, max_subarray = max_subarray_sum(arr)
print("Maximum subarray sum is", max_sum)
print("The subarray is", max_subarray)
