class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int w) {
        map<int,int>c;
        for(auto i:hand) c[i]++;
        for(auto it:c){
            if(c[it.first]>0){
                for(int i=w-1;i>=0;--i){
                    if((c[it.first+i]-=c[it.first])<0) return false;
                }
            }
        }
        return true;
    }
};