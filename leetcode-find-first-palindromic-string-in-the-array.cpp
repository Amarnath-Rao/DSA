class Solution {
public:
    int isPalindrome(string s){
        int n=s.size();
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                return 0;
            }
        }
        return 1;
    }
    string firstPalindrome(vector<string>& words) {
        string x;
        for(int i=0; i<words.size();i++){
            if(isPalindrome(words[i])){ // Fix the function name here
                x=words[i];
                break;
            }
        }
        return x;
    }
};