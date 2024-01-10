class Solution:
    def longSubarrWthSumDivByK(self, arr, n, k):
        sum = 0
        suffix = {0: n}
        ans = 0
        for i in range(n - 1, -1, -1):
            sum = (sum + (arr[i] % k) + k) % k

            if sum not in suffix:
                suffix[sum] = i
            else:
                ans = max(ans, suffix[sum] - i)
        return ans