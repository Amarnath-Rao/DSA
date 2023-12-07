class Solution:
    def countSubarrays(self, a, n, L, R):
        ans = 0
        small = 0
        valid = 0

        for i in range(n):
            if a[i] > R:
                ans += (valid * (valid + 1)) // 2
                ans -= (small * (small + 1)) // 2

                valid = small = 0
            elif a[i] < L:
                valid += 1
                small += 1
            else:
                ans -= (small * (small + 1)) // 2
                small = 0
                valid += 1

        ans += (valid * (valid + 1)) // 2
        ans -= (small * (small + 1)) // 2

        return ans
