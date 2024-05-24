#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#include <iostream>


/*

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        // support variable
        int res = words.size();
        bool alpha[26] = {};
        // populating alpha
        for (char c: allowed) alpha[c - 'a'] = true;
        // parsing all the words to see if each character is in alpha
        for (string word: words) {
            // in case we find an unallowed character, we decrease res and break
            for (char c: word) if (!alpha[c - 'a']) {
                res--;
                break;
            }
        }
        return res;
    }
};

*/

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

void fun(){
    //subset of nums
    vector<int>nums{2,4,6};int k=2;
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
    cout<<count;

    
}
int main(){
    fun();
}