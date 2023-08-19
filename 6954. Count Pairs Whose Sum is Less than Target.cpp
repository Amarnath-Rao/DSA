
#include<bits/stdc++.h>
using namespace std;
 
// Function to count pairs in array
// with sum less than x.
int countPairs(vector<int>& nums, int target) {
     int cvb=nums.size();
    int kj=0;
    for(int re=0;re<cvb-1;re++){
        for(int j=re+1;j<cvb;j++){                
            if(nums[re]+nums[j]<target)
                kj++;
        }
    }
     return kj;
}
 
// Driven code
int main()
{
    vector<int> a={-1,1,2,3,1};
    int x = 2;
    cout << countPairs(a, x);
    return 0;
}