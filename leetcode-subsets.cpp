class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size(),c=(1<<n);
        vector<vector<int>> res(c);
        for(int i=0;i<c;i++){
            for(int j=0;j<n;j++){
                if((i>>j)&1){res[i].push_back(nums[j]);}
            }
        }
        return res;
    }
};