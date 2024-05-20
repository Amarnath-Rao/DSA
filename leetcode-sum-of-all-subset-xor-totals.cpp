class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int c=0;
        for(int i=0;i<(1<<nums.size());i++){
            int s=0;
            for(int j=0;j<nums.size();j++){
                if((i&(1<<j))!=0) s^=nums[j];
            }c+=s;
        }
        return c;
    }
};
