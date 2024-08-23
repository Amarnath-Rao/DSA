#include<bits/stdc++.h>
using namespace std;
void e(){
    int n=4;
    int a[n]={3,4,1,5};
    int buy=-1,profit=0;
    for(int i=0;i<n;i++){
        if(buy==-1){
            buy=a[i];
        }
        if(i<n-1 && a[i]>a[i+1]){
            profit+=(a[i]-buy);
            buy=-1;
        }
        else if(i==n-1 && buy!=-1){
            profit+=(a[i]-buy);
        }
    }
    cout<<profit<<endl;
}
int main(){
    e();
}