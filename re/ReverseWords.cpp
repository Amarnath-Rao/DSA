#include<bits/stdc++.h>
using namespace std;
string fun(){
    string s="i.like.this.program.very.much";
    //output: much.very.program.this.like.i
    vector<string> v;
    string temp="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            v.push_back(temp);
            temp="";
        }
        else{
            temp+=s[i];
        }
    }
    v.push_back(temp);
    string ans="";
    for(int i=v.size()-1;i>=0;i--){
        ans+=v[i];
        if(i!=0){
            ans+=".";
        }
    }
    cout<<ans;
    return ans;

}
int main(){
    fun();
}