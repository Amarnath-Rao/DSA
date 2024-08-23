#include<bits/stdc++.h>
using namespace std;

void e(){
    int a[]={3, 5, 0, 0, 4};
    int n=sizeof(a)/sizeof(a[0]);
    int st=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[st]);st++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}

int main(){
    e();
}
