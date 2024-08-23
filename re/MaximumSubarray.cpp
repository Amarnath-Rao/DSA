#include<bits/stdc++.h>
using namespace std;

void e(){
    int a[]={-2,1,-3,4,-1,2,1,-5,4};
    int m=INT_MIN,cm=0;
    for(auto i:a){
        cm=max(i,i+cm);
        m=max(m,cm);
    }
    cout<<m<<endl;
}

int main(){
    e();
}
