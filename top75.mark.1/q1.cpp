#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    } 
}