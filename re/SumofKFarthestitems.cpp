#include<bits/stdc++.h>
using namespace std;
void fun(){
    /*
    Input :
5 3 20
21 4 15 17 11

Output :
30

4, 15 and 11 are farthest from 20. Thus, their sum will be the answer.
    */
   int n=5,k=3,x=20;
   int arr[n]={21,4,15,17,11};
   vector<pair<int,int>>v;
   for(int i=0;i<n;i++){
    v.push_back({abs(arr[i]-x),arr[i]});
   }
   sort(v.rbegin(),v.rend());
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += v[i].second;
    }
    cout << sum << endl;
}
int main(){
    fun();
}