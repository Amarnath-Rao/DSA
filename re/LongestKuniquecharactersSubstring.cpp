#include<bits/stdc++.h>
using namespace std;

void e(){
    string s="aabacbebebe";
    int k=3;
    int l=0,r=0;
    int n=s.size();
    int ans=-1;
    map<char,int> mp;
    while(r<n){
        mp[s[r]]++;
        while(mp.size()>k){
            mp[s[l]]--;
            if(mp[s[l]]==0){
                mp.erase(s[l]);
            }
            l++;
        }
        if(mp.size()==k){
            ans=max(ans,r-l+1);
        }
        r++;
    }
    cout<<ans<<endl;
}

int main(){
    e();
}
