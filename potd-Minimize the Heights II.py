class Solution:
    def getMinDiff(self, arr, n, k):
        arr.sort()

        ans = arr[n - 1] - arr[0]

        for i in range(1, n):
            if arr[i] < k:
                continue

            MIN = min(arr[0] + k, arr[i] - k)
            MAX = max(arr[n - 1] - k, arr[i - 1] + k)

            ans = min(ans, MAX - MIN)

        return ans
