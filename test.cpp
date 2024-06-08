#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#include <iostream>

int fun(){
    
    int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int m = 7; // Number of students
    if (m == 0 || n == 0)
        return 0;
    if (n<m) return -1;
    sort(arr,arr+n);
    int min_diff = INT_MAX;
    for(int i=0;i+m-1<n;i++){
        int diff = arr[i+m-1]-arr[i];
        if(diff<min_diff){
            min_diff = diff;
        }
    }
    return min_diff;
    /*
    int n=nums.size();
        unordered_set<int>s;
        nums[0]%=k;
        for (int i = 1;i < n;i++) {
            nums[i] += nums[i - 1];
            nums[i] %= k;
            if (s.find(nums[i]) != s.end() || (i && !nums[i])) return true;
            s.insert(nums[i - 1]);
        }
        return false;
    */
}

int main(){
    auto x=fun();
    cout<<x;
}