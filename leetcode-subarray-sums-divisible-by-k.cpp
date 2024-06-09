class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>sums(k,0);
        sums[0]++;
        int c=0,cs=0;
        for(int i=0;i<n;i++){
            cs=(cs+nums[i]%k+k)%k;
            c+=sums[cs];
            sums[cs]++;
        }
        return c;
    }
};