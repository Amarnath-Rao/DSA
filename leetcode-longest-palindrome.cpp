class Solution {
public:
    int longestPalindrome(string s) {
        int i=0;
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
            if((mp[c]%2)==1) i++;
            else i--;
        }if(i>0) return s.length()-i+1;
        else return s.length();
    }
};
