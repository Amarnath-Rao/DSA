#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#include <iostream>

void fun(){
    
    int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int m = 7; // Number of students
    sort(arr, arr + n);
    int mi=arr[0];
    int ma=arr[2];
    cout<<ma-mi;
    
}

int main(){
    fun();
}