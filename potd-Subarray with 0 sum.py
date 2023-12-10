class Solution:
    
    # Function to check whether there is a subarray present with 0-sum or not.
    def subArrayExists(self, arr, n):
        # Your code here
        # Return true or false
        s = set()
        total_sum = 0
        for num in arr:
            total_sum += num
            if total_sum in s or total_sum == 0:
                return True
            s.add(total_sum)
        return False

# Example usage
solution = Solution()
arr = [4, 2, -3, 1, 6]
n = len(arr)
result = solution.subArrayExists(arr, n)
print(result)
