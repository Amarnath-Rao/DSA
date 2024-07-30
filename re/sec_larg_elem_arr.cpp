#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={2,3,4,5,2,1};
    int n=a.size();
    int f=INT_MIN,s=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>f){
            f=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]<f && a[i]>s){
            s=a[i];
        }
    }
    cout<<s;
}