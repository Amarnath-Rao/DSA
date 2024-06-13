#include<bits/stdc++.h>
using namespace std;
#define lli long long int

void fun(){
    int a[]={7,10,4,3,20,15};
    int n=6,k=3;
    sort(a,a+n);
    cout<<a[k-1];

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

}

int main(){
    fun();
}