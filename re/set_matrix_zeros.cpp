#include<bits/stdc++.h>
using namespace std;
/*
*Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
*Output: [[1,0,1],[0,0,0],[1,0,1]]

Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
*/

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat(n,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int x=mat.size();
    int y=mat[0].size();
    cout<<x<<" "<<y<<endl;
    unordered_set<int>nr;
    unordered_set<int>nc;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(mat[i][j]==0){
                nr.insert(i);
                nc.insert(j);
            }
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(nr.count(i) || nc.count(j)){
                mat[i][j]=0;
            }
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}