#include<bits/stdc++.h>
using namespace std;
void fun(){
    string s="abbccc";
    unordered_map<char,int>mp;
    string res;
    set<char>st;
    for(char c:s){
        mp[c]++;
    }
    for(auto i:s){
        if(st.find(i)==st.end()){
            if(mp[i]>1) res+=i+to_string(mp[i]);
            else res+=i;
            st.insert(i);
        }
    }
    cout<<res;
}
int main(){
    fun();
}