"""

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
   
    int isSumProperty(Node *root)
    {
     // Add your code here
     if(!root || (!root->left && !root->right))return 1;
          int k=0;
         if(root->left)k=root->left->data;
         if(root->right)k+=root->right->data;
         return (k==root->data) and isSumProperty(root->left) and isSumProperty(root->right);
    
     
    }
};

"""