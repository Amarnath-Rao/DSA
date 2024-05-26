#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#include <iostream>

void fun(){
    //output:"001"
    string s="010";int cz=0,co=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0') cz++;
        else co++;
    }
    string ans = string(co - 1, '1') + string(cz, '0') + '1';
    cout<<ans<<endl;
}

int main(){
    fun();
}