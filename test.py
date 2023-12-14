class Solution:
    def onesMinusZeros(self, grid: List[List[int]]) -> List[List[int]]:
        return (R:=list(map(sum, grid))) and (C:=list(map(sum, zip(*grid)))) and \
            [[2*R[i]+2*C[j]-len(R)-len(C) for j in range(len(C))] for i in range(len(R))]