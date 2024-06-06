class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int w) {
        map<int,int>c;
        for(auto i:nums) c[i]++;
        //if((nums.size()%w)==0) return 
        for(auto i:c){
            if(c[i.first]>0){
                for(int t=w-1;t>=0;--t){
                    if((c[i.first+t]-=c[i.first])<0) return false;
                }
            }
        }
        return true;
    }
};