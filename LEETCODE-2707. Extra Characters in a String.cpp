class Solution {
public:
    int solve(string& s, unordered_map<string, int>&mp, int index){
        if (index >= s.size()) return 0;
        string currStr = "";
        int minExtra = s.size();
        for (int cutIdx = index; cutIdx < s.size(); cutIdx++){
            currStr.push_back(s[cutIdx]);
            int currExtra = (mp.count(currStr))? 0 : currStr.size();
            int nextExtra = solve(s, mp, cutIdx + 1);
            int totalExtra = currExtra + nextExtra;
            minExtra = min(minExtra, totalExtra);
        }
        return minExtra;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_map<string, int>mp;
        for (string& word : dictionary) mp[word]++;
        
        int ans = solve(s, mp, 0);
        return ans;      
    }
};