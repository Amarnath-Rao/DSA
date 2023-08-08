class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        m=0
        for o in sentences:
            c=len(o.split(" "))
            if(m<c):
                m=c
        return m