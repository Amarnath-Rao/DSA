#include<bits/stdc++.h>
using namespace std;
int fun(int arr[],int n,int f){
    int k=f;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}
int main()
{
    // Let us search 3 in below array
    int arr1[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int key = 3;
 
    // Function calling
    cout << "Index of the element is : "
         << fun(arr1, n, key);
 
    return 0;
}