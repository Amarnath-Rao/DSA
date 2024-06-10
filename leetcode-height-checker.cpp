#include<bits/stdc++.h>
using namespace std;
#define lli long long int

void fun(){
    
    int a[] = {2,1,2,1,1,2,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];
    for(int i=0; i<n; i++){
        b[i]=a[i];
    }
    int c=0;
    sort(a,a+n);
    for(int i=0; i<n; i++){
        if(a[i]!=b[i]){
            c++;
        }
    }
    cout<<c;
}

int main(){
    fun();
}