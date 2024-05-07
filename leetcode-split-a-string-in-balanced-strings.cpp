class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.length();int c1=0,c2=0,x=0;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                c1+=1;
            }else if(s[i]=='L') c2+=1;
            if(c1==c2){
                x+=1;
                c1=0;c2=0;
            }
        }
        return x;
    }
};