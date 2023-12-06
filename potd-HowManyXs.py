class Solution:
    def countX(self, L, R, X):
        ans = 0

        for i in range(L + 1, R):
            cur = i

            while cur:
                ans += (cur % 10) == X
                cur //= 10

        return ans
