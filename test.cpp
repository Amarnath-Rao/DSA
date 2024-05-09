#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#include <iostream>
void fun(){
    
    string s = "codeleet";vector<int> indices {4,5,6,7,0,2,1,3};
    string x=s;
    for(int i=0;i<s.size();++i){
        x[indices[i]]=s[i];
    }
    cout<<x<<endl;
}
int main(){
    fun();
}