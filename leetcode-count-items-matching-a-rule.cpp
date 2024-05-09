class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int c=0;
        if(ruleKey=="type"){
            for(int i=0;i<items.size();i++){
                if(items[i][0]==ruleValue){
                    c+=1;
                }
            }
        }else if(ruleKey=="color"){
            for(int i=0;i<items.size();i++){
                if(items[i][1]==ruleValue){
                    c+=1;
                }
            }
        }
        else{
            for(int i=0;i<items.size();i++){
                if(items[i][2]==ruleValue){
                    c+=1;
                }
            }
        }
        return c;
    }
};