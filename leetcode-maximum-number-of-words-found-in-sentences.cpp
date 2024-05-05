class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int>l;
        for(auto x:sentences){
            int c=0;
            for(int i=0;i<x.size();i++){
                if(x[i]==' '){
                    c++;
                }
            }
            l.push_back(c+1);
        }
        return *max_element(l.begin(), l.end());
    }
};