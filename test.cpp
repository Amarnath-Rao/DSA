#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#include <iostream>
void fun(){
    string s="fgG";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
    
}
int main(){
    fun();
}