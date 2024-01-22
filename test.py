private:
        vector<int> temp;
        vector<vector<int>> res;
    void helper(Node * root, int sum){
        if(!root) return ;
        
        temp.push_back(root->key);
        
        if(sum - root->key == 0) res.push_back(temp);
        helper(root->left,sum-root->key);
        helper(root->right,sum-root->key);
        
        temp.pop_back();
        
    }
    public:
    vector<vector<int>> printPaths(Node *root, int sum){
        helper(root,sum);
        return res;
    }

