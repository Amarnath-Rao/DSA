class Solution(object):
    def nextPermutation(self, nums):
        i=j=len(nums)-1
        while i>0 and nums[i-1]>=nums[i]:
            i-=1
        if i>0:
            while nums[j]<=nums[i-1]:
                j-=1
            nums[i-1],nums[j]=nums[j],nums[i-1]
        nums[i:]=nums[i:][::-1]