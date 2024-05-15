class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,int>check;
        int it=0;
        string decoded="";
        for(char c:key){
            if(!check[c] && c>='a' && c<='z'){
                check[c]='a'+it;
                it++;
            }
        }for(char c:message){
            if(isalpha(c)){
                decoded+=check[c];
            }else decoded+=c;
        }
        return decoded;
    }
};