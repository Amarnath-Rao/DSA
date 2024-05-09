class Solution {
public:
    string truncateSentence(string s, int k) {
        int c=0;
        string x;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                c++;
            }
        }
        if(c>=k){
            for(int i=0;i<s.size();i++){
                if(s[i]==' '){
                    k--;
                }
                if(k==0){
                    break;
                }
                x+=s[i];
            }
        }
        else{
            x=s;
        }
        return x;
    }
};