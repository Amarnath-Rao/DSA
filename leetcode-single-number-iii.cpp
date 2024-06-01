class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int n:nums){
            mp[n]++;
        }vector<int>res;
        for(auto x:mp){
            if(x.second==1){
                res.push_back(x.first);
            }
        }
        return res;
    }
};