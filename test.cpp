#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#include <iostream>
int sentcount(string sentences){
    int c=0;
    for(int i=0;i<sentences.size();i++){
        if(sentences[i]==' '){
            c++;
        }
    }
    return c+1;
}
void fun(){
    vector<string>sentences({"alice and bob love leetcode", "i think so too", "this is great thanks very much"});
    vector<int>l;
    for(auto x:sentences){
        l.push_back(sentcount(x));
    }
    cout<<*max_element(l.begin(), l.end()); // Modify the code to pass the l vector as two separate iterators to the max function

}
int main(){
    fun();
}