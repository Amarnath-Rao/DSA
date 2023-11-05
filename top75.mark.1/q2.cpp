#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = { 1000, 11, 445, 1, 330, 3000 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + arr_size);
    cout<<arr[0]<<" "<<arr[arr_size-1];
 
    return 0;
}