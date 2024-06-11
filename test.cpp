#include<bits/stdc++.h>
using namespace std;
#define lli long long int

void fun(){
    

    /*
    class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> result;
        for (int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < arr1.size(); j++) {   
                if (arr1[j] == arr2[i]) {
                    result.push_back(arr1[j]);
                    arr1[j] = -1;
                }
            }
        }
        sort(arr1.begin(), arr1.end());
        for (int i = 0; i < arr1.size(); i++) {
            if (arr1[i] != -1) {
                result.push_back(arr1[i]);
            }
        }
        return result;
    }
};
    
    */
    int a[] = {2,1,2,1,1,2,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];
    for(int i=0; i<n; i++){
        b[i]=a[i];
    }
    int c=0;
    sort(a,a+n);
    for(int i=0; i<n; i++){
        if(a[i]!=b[i]){
            c++;
        }
    }
    cout<<c;
}

int main(){
    fun();
}