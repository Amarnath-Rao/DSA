#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
ll rec(ll x, ll n){
    if(x==0) return 0;
    if(n==0) return 1;
    return (x*rec(x,n-1))%mod;
}
int main(){
    int x,n;
    //cin>>x>>n;
    cout<<rec(57,75);
}