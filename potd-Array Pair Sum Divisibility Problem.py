class Solution:
    def canPair(self, nums, k):
        f = {}
        for num in nums:
            cur = num % k
            need = (k - cur) % k

            if need in f:
                f[need] -= 1

                if f[need] == 0:
                    del f[need]
            else:
                if cur not in f:
                    f[cur] = 0
                f[cur] += 1

        return len(f) == 0