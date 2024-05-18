class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>ans;
        for(char c=s[0];c<=s[3];c++){
            for(int i=s[1]-'0';i<=s[4]-'0';i++){
                string res="";
                res+=c;
                res+=to_string(i);
                ans.push_back(res);
            }
        }
        return ans;
    }
};