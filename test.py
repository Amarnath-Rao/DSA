"""
 void levelordertraversal(Node* root,vector<vector<int>>&ans){
        if(root==NULL){
            return ;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>ds;
            for(int i=0;i<size;i++){
                Node* temp=q.front();
                q.pop();
                ds.push_back(temp->data);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            ans.push_back(ds);
        }
        
    }
    void solve(Node* root,vector<int>&store){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            store.push_back(root->data);
        }
        if(root->left){
            solve(root->left,store);
            
        }
        if(root->right){
            solve(root->right,store);
            
        }
    }
    bool check(Node *root)
    {
       
        vector<vector<int>>ans;
        vector<int>store;
        levelordertraversal(root,ans);
        solve(root,store);
        int n=ans.size();
        int last=ans[n-1].size();
        if(store.size()!=last){
            return false;
        }
        return true;
        
    }


"""