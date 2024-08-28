#include<bits/stdc++.h>
using namespace std;
void fun(){
    int a[]={12, 35, 1, 10, 34, 1};
    int n=sizeof(a)/sizeof(a[0]);
    int m=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>m) m=a[i];
    }
    int s=0;
    for(int i=0;i<n;i++){
        if(a[i]<m and a[i]>s) s=a[i];
    }
    cout<<s<<endl;

}
int main(){
    fun();
}