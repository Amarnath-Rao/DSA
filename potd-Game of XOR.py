class Solution:
    def gameOfXor(self, N , A):
        result = 0
        for i in A:
            result ^= i
        return result

# Example Usage
N = 3
A = [1, 2, 3]
solution = Solution()
output = solution.gameOfXor(N, A)
print(output)
