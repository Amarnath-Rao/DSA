#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int arr[] = {7, 10, 4, 3, 20, 15}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    sort(arr,arr+n);
    cout<<arr[k-1];
}