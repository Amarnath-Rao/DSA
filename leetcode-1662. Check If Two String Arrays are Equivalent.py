class Solution(object):
    def arrayStringsAreEqual(self, word1, word2):
        """
        :type word1: List[str]
        :type word2: List[str]
        :rtype: bool
        """
        x1=""
        x2=""
        for i in word1: x1+=i
        for j in word2: x2+=j
        return x1==x2