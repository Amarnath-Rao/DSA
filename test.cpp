#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#include <iostream>
void fun(){
    vector<string> words={"leet","code"}; // Change the type of 'words' from 'vector<string>' to 'vector<string>'
    vector<int> c; // Change the type of 'c' from 'long long' to 'vector<long long>'
    char x='e';
    for(int i=0; i<words.size();i++){
        if(words[i].find(x)!=string::npos){
            c.push_back(i);
        }
    }
    for(auto i:c){cout<<i<<" ";}cout<<endl;
}
int main(){
    fun();
}