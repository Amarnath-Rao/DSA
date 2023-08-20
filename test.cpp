//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long s;
    cin>>n>>s;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=0;
    long long c=0;
    while(r<n){
        c+=arr[r];
        while(c>s && l<r){
            c-=arr[l];
            l++;
        }
        if(c==s){
            cout<<l+1<<" "<<r+1<<endl;
            break;
        }
        r++;
    }
}