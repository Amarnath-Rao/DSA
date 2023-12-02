class Solution:
    def isRepresentingBST(self, arr, N):
        for i in range(1, N):
            if arr[i] <= arr[i - 1]:
                return 0
        return 1
