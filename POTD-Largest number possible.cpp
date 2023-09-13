//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int n, int s){
        // code here
        if(s>n*9 or(s==0 and n>1)) return "-1";
        string m="";
        while(s>=9){
            m+='9';
            s-=9;
            n-=1;
        }
        while (n>0){
            /* code */
            if(s>0){
                m+=to_string(s);
                s=0;
            }else m+='0';
            n--;
        }
        return m;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends