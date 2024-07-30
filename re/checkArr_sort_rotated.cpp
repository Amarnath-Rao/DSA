#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,4,5,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[(i+1)%n]){
            c++;
        }
    }
    if(c>1) cout<<"false";
    else cout<<"true";
}