#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#include <iostream>
void fun(){
    vector<string> word1{"ab", "c"}, word2{"a", "bc"};
    string s1,s2;
    for(int i=0;i<word1.size();i++){
        s1+=word1[i];
    }for(int i=0;i<word2.size();i++) s2+=word2[i];
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
}
int main(){
    fun();
}