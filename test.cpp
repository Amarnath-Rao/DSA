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


    // vector<int>fin;
    // bool f=false;
    // int l=0,r=0,c=0;
    // for(int i=0;i<n;i++){
    //     c+=arr[i];
    //     if(c>=s){
    //         r=i;
    //         while (s<c && l<r){

    //         }

    //     }
    // }
















    // int k=0,c=0,v,z;
    // int l=arr[0],r=arr[0];
    // for(int i=0;i<n;i++){
    //     k=arr[0];
    //     while(k<s){
    //         k+=arr[i];
    //     }
    //     v=i;
    //     while(k!=s){
    //         k-=arr[i];
    //     }
    //     z=i;
    // }
    // int t=0,x;
    // cout<<v<<endl;
    // cout<<z<<endl;
    // for(int i=0;i<n;i++){
    //     while(s!=k){
    //         k-=arr[i];
    //     }
    //     break;
    //     x=i;
    //     break;
    // }
    // cout<<x<<endl;
}