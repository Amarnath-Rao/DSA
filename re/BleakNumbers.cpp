#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n){
    int c=0;
    while(n>0){
        if(n&1) {c++;}
        n>>=1;
    }
    return c;
}
int isBleak(int n){
    int k=32;
    for(int i=n-k;i<n;i++){
        if(i+countSetBits(i)==n) return 0;
    }
    return 1;
}
int main(){
    cout<<isBleak(3)<<endl;
}