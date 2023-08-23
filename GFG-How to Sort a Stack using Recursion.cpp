#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sortstack(stack<ll> &s){
    if(s.empty()) return;

    int x=s.top();
    s.pop();
    
    sortstack(s);
    
    stack<ll> temp;
    
    while(!s.empty() && s.top()>x){
        temp.push(s.top());
        s.pop();
    }
    s.push(x);
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<ll> s;
    s.push(34);
    s.push(3);
    s.push(31);
    s.push(98);
    s.push(92);
    s.push(23);
    sortstack(s);
    cout<<"Sorted Stack: ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}