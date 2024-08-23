#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={0,2,1,2,0};
    int n=sizeof(a)/sizeof(a[0]);
    int l=0,m=0,h=n-1;
    while(m<=h){
        switch (a[m]){
            case 0:
                swap(a[l++],a[m++]);
                break;
            case 1:
                m++;
                break;
            case 2:
                swap(a[m],a[h--]);
                break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}