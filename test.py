def maxSubArrayLen(arr):
    max_so_far = max_ending_here = 0
    start = end = 0
    beg = 0
    for i in range(len(arr)):
        max_ending_here = max_ending_here + arr[i]
        if max_ending_here < 0:
            max_ending_here = 0
            beg = i + 1
        elif max_so_far < max_ending_here:  
            max_so_far = max_ending_here
        start = beg
        end = i
    return end - start + 1

arr = [1,2,3,4,5,-1,-2,-3,-4,-5,6,7,8,9,10]
print(maxSubArrayLen(arr))