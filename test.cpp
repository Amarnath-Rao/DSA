#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#include <iostream>

void fun(){
    vector<int> a{1,2,1,3,2,5};
    int size=a.size();
    // int reversedArr[size];
    // for (int i = 0; i < size; i++) {
    //     reversedArr[i] = a[size - i - 1];
    // }

    // Print reversed array
    cout << "Reversed Array: ";
    for (int i = size-1; i>=0; i--) {
        cout<<a[i]<<" ";
    }
}

int main(){
    fun();
}