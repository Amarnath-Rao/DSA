class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        return next((s for s in words if all(s[i]==s[-(i+1)] for i in range(len(s)//2))), "")
    

"""

class Solution {
public:
int isPossible(vector<vector<int>> paths){
        for(auto i: paths){
            if(accumulate(i.begin(), i.end(), 0) % 2 != 0)
                return false;
        }
        return true;
}
 
};

"""