#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#include <iostream>

void fun(){
    //Output: "This is a sentence"
    string s = "is2 sentence4 This1 a3";
    vector<string> v;
    string temp = "";
    for(int i=0;i<s.size();i++){
        if(s[i] == ' '){
            v.push_back(temp);
            temp = "";
        }
        else{
            temp += s[i];
        }
    }
    v.push_back(temp);
    vector<string> ans(v.size());
    for(int i=0;i<v.size();i++){
        int index = 0;
        for(int j=0;j<v[i].size();j++){
            if(isdigit(v[i][j])){
                index = j;
                break;
            }
        }
        int num = stoi(v[i].substr(index));
        ans[num-1] = v[i].substr(0,index);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    

    
}
int main(){
    fun();
}