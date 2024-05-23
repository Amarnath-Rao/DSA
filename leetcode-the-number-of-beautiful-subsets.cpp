class Solution {
public:
    bool isBeautifulSubset(vector<int>& subset, int k) {
        for (int i = 0; i < subset.size(); ++i) {
            for (int j = i + 1; j < subset.size(); ++j) {
                if (abs(subset[i] - subset[j]) == k) {
                    return false;
                }
            }
        }
        return true;
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        
        int n = nums.size();
        int count = 0;

        for (int mask = 1; mask < (1 << n); ++mask) {
            vector<int> subset;
            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    subset.push_back(nums[i]);
                }
            }
            if (isBeautifulSubset(subset, k)) {
                ++count;
            }
        }
        return count;
    }
};