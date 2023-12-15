class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        s,e=map(set,zip(*paths))
        d=(e-s).pop()
        return d