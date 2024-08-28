#include<bits/stdc++.h>
using namespace std;
void fun(){
    int n=5;
    vector<vector<int>>a(n);
        for(int i=0;i<n;i++){
            a[i].resize(i+1);
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) a[i][j]=1;
                else a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    fun();
}