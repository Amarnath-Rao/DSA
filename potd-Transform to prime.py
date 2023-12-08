import math

class Solution:
    def isPrime(self, x):
        if x == 1:
            return False
        if x == 2:
            return True
        for i in range(2, int(math.sqrt(x)) + 1):
            if x % i == 0:
                return False
        return True

    def minNumber(self, arr, N):
        _sum = sum(arr)
        
        if self.isPrime(_sum):
            return 0
        
        for i in range(_sum + 1, 2 * _sum + 1):
            if self.isPrime(i):
                return i - _sum
        
        return 0