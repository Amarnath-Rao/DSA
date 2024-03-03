#include<bits/stdc++.h>
using namespace std;

// Custom comparator function to sort according to the number formed by concatenation
static bool compareNum(string a, string b) {
    return a + b > b + a;
}

string printLargest(vector<string> arr) {
    // Sort the numbers using the compareNum function
    sort(arr.begin(), arr.end(), compareNum);
    for (int i = 0; i < arr.size(); i++)
        cout<<i<<" ";
    cout<<endl;
    
    // Concatenate all elements in the array to form the largest number
    string ans = "";
    for (int i = 0; i < arr.size(); i++)
        ans += arr[i];
    
    return ans;
}

int main() {
    vector<string> arr = {"54", "546", "548", "60"};
    cout << printLargest(arr) << endl;
    return 0;
}
