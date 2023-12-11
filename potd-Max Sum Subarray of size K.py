#User function Template for python3
class Solution:
    def maximumSumSubarray(self, K, Arr, N):
        max_sum = sum(Arr[:K])
        current_sum = max_sum

        for i in range(K, N):
            current_sum += Arr[i] - Arr[i - K]
            max_sum = max(max_sum, current_sum)

        return max_sum
