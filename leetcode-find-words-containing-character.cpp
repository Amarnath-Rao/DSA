class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>c;
        for(int i=0; i<words.size();i++){
            if(words[i].find(x)!=string::npos){
                c.push_back(i);
            }
        }
        return c;
    }
};