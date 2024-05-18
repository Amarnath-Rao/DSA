#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#include <iostream>
int isPalindrome(string s){
    int n=s.size();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            return 0;
        }
    }
    return 1;
}
int isPalindrome(string s); // Add this line

void fun(){
   vector<string>words{"abc","car","ada","racecar","cool"};
   for(int i=0; i<words.size();i++){
    if(isPalindrome(words[i])){ // Fix the function name here
        cout<<words[i]<<endl;
        break;
    }
   }
}
int main(){
    fun();
}