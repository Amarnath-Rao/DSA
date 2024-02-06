"""

 int printKDistantfromLeaf(Node* root, int k)
    {
        unordered_map<Node *,Node *> m;
        unordered_set<Node *> leaf;
        unordered_set<Node *> ans;
        
        queue<Node *> q;
        q.push(root);
        m[root]=NULL;
        
        while(!q.empty())
        {
            Node * t=q.front();
            q.pop();
            
            if(t->left==0 && t->right==0)
                leaf.insert(t);
                
            if(t->left)
            {
                q.push(t->left);
                m[t->left]=t;
            }
            if(t->right)
            {
                q.push(t->right);
                m[t->right]=t;
            }
        }
        
        for(auto &val:leaf)
        {
            int cnt=0;
            Node * t=val;
            while(cnt!=k && t!=0)
            {
                cnt++;
                t=m[t];
            }
            if(t!=0 && cnt==k)
                ans.insert(t);
        }
        return ans.size();
    }



"""