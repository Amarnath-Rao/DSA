//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubString(string& str) {
        // code here
        int n=str.size();
        if(n==1) return 1;
        set<char> st;
        map<char,int> mp;
        for(int i=0;i<n;i++){
            st.insert(str[i]);
        }
        int count=st.size();
        int minAns=INT_MAX;
        int i=0;
        int j=0;
        
        while(j<n){
           mp[str[j]]++;
           
           if(mp.size()==count){
               while(mp.size()==count && i<=j){
                   mp[str[i]]--;
                   if(mp[str[i]]==0) mp.erase(str[i]);
                   i++;
               }
               
               minAns=min(minAns,j-i+2);
           }
           j++;
        }
        
        if(j==n){
           if(mp.size()==count){
               while(mp.size()==count && i<=j){
                   mp[str[i]]--;
                   if(mp[str[i]]==0) mp.erase(str[i]);
                   
                   i++;
               }
               
               minAns=min(minAns,j-i+2);
           } 
        }
        return minAns;
    }
};




//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends