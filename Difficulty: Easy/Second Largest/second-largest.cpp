//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int m=*max_element(arr.begin(),arr.end());
        int ans=arr[0];
        if(ans==m){
            for(int i=1;i<arr.size();i++){
                if(arr[i]!=m){
                    ans=arr[i];
                    break;
                }
            }
        }
        for(int i=0;i<arr.size();i++){
            if(ans<arr[i]&&arr[i]<m)
            ans=arr[i];
        }
        return ans==m?-1:ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends