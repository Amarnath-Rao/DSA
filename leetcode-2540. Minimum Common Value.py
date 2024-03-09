nums1 = [1,2,3,6]
nums2 = [2,3,4,5]
nums1 = sorted(nums1)
nums2 = sorted(nums2)
x = None
for i in nums1:
    for j in nums2:
        if i == j:
            x = i
            break
    if x is not None:
        break
print(x)