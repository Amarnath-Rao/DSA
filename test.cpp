/*
int findCity(int n, int m, vector<vector<int>>& edges, int distanceThreshold) {
        unordered_map<int,list<pair<int,int>>>adj;
        for(int i=0;i<m;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int w=edges[i][2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        int ans=1e9;
        int node=-1;
        for(int i=0;i<n;i++){
            vector<int>dis(n,INT_MAX);
            set<pair<int,int>>s;
            dis[i]=0;
            s.insert({0,i});
            while(!s.empty()){
                auto top=*(s.begin());
                int distance=top.first;
                int node=top.second;
                s.erase(s.begin());
                for(auto j:adj[node]){
                    if(distance+j.second<dis[j.first]){
                        auto record=s.find(make_pair(dis[j.first], j.first));;
                        if(record!=s.end()){
                            s.erase(record);
                        }
                        dis[j.first]=distance+j.second;
                        s.insert({dis[j.first],j.first});
                    }
                }
            }
            int cnt=0;
            for(int k=0;k<n;k++){
                if(i==k){
                    continue;
                }
                if(dis[k]<=distanceThreshold){
                    cnt++;
                }
            }
            if(cnt<ans){
                ans=cnt;
                node=i;
            }
            else if(cnt==ans){
                node=max(node,i);
            }
            
        }
        return node;
    }
*/










//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// } Driver Code Ends
/* A binary tree Node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */


class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {

           // code here


         vector<int>ans;
        stack<Node*>s1,s2;
        if(root) s1.push(root);

        while(!s1.empty() || !s2.empty()){
            while(!s1.empty()){
                Node* top=s1.top();
                ans.push_back(top->data);
                s1.pop();
                if(top->left) s2.push(top->left);
                if(top->right) s2.push(top->right);
            }            
            while(!s2.empty()){
                Node* top=s2.top();
                ans.push_back(top->data);
                s2.pop();
                if(top->right) s1.push(top->right);
                if(top->left) s1.push(top->left);
            }
        }
        return ans;
    }
};
//{ Driver Code Starts.

/* Helper function to test mirror(). Given a binary
   search tree, print out its data elements in
   increasing sorted order.*/
void inOrder(struct Node* node)
{
  if (node == NULL)
    return;

  inOrder(node->left);
  printf("%d ", node->data);

  inOrder(node->right);
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d ",&t);
  while (t--)
  {
        string s;
		getline(cin,s);
		Node* root = buildTree(s);
		Solution ob;
        //vector <int> res = ob.levelOrder(root);
        //for (int i : res) cout << i << " ";
        cout << endl;
  }
  return 0;
}



// } Driver Code Ends

/*

class Solution{

int ans;

private:

int root(int i, vector<int> &parent)

{

   while(parent[i]!=i)

   {

       parent[i] = parent[parent[i]];

       i = parent[i];

   }

   return i;

}

   int Union(int a, int b, vector<int> &parent, vector<int> &sz)

   {

       int ra = root(a, parent);

       int rb = root(b, parent);

       if(ra == rb)

           return sz[ra]*sz[ra];

       if(sz[ra] < sz[rb])

   {

       swap(ra,rb);

       swap(a,b);

   }

       ans += sz[ra]*sz[rb];

   parent[rb] = ra;

   sz[ra] += sz[rb];

   return ans;

      }

public:

vector<int> maximumWeight(int n, vector<vector<int>> edges, int q, vector<int> &queries)

{

ans = 0;

vector<int> parent(n+1, 0), sz(n+1, 0);

for(int i = 0;i <= n; i++)

{

           parent[i] = i;

           sz[i] = 1;

       }

       vector<pair<int, pair<int, int>>> wt;

      for(int i = 0; i < n-1; i++)

            wt.push_back({edges[i][2] , {edges[i][0], edges[i][1]}});                  sort(wt.begin() , wt.end());

       map<int, int> mp;

       for(int i = 0;i < n-1; i++){

           int a = wt[i].first;

           int b = wt[i].second.first;

           int c = wt[i].second.second;

           mp[a] = Union(b, c, parent, sz);

         }

       vector<int> res;

       for(int i = 0; i < q; i++)

       {

          auto val = mp.upper_bound(queries[i]);

           if(val == mp.begin())

               res.push_back(0);

           else

            {

                val--;

               res.push_back(val->second);

           }

      }

      return res;

}

};

*/