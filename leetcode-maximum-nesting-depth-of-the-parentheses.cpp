class Solution {
public:
    int maxDepth(string s) {
        int a=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                a=max(a,++c);
            }else if(s[i]==')'){c--;}
        }
        return a;
    }
};