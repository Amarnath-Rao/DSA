#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#include <iostream>
void fun(){
    string key="the quick brown fox jumps over the lazy dog",message="vkbs bs t suepuv";
    unordered_map<char,int>check;
    string decode="";
    int it=0;
    for(char c:key){
        if(!check[c]&&c>='a'&&c<='z'){
            check[c]='a'+it;
            it++;
        }
    }for(char c:message){
        if(isalpha(c)){
            decode+=check[c];
        }else decode+=c;
    }
    cout<<decode<<endl;
}
int main(){
    fun();
}