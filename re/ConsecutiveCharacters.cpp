#include<bits/stdc++.h>
using namespace std;
void fun(){
    string s="leetcode";
    int m=1,cm=1;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]) cm++;
        else cm=1;
        m=max(m,cm);
    }
    cout<<m;
}
int main(){
    fun();
}