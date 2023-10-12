
class Solution {
     string mark = "$";
    unordered_set<string> subtree;
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    int dupSub(Node *root) {
        string str = dup(root);

        if (str == "#")
            return 1;
        else
            return 0;
    }

    string dup(Node* root) {
        string s = "";
        if (root == nullptr)
            return s + mark; // If root is null, return "$".

        string lstr = dup(root->left);
        if (lstr == "#") // If a duplicate subtree is found, do not check further.
            return "#";

        string rstr = dup(root->right);
        if (rstr == "#") // If a duplicate subtree is found, do not check further.
            return "#";

        // To return the subtree string to its parent call.
        s = s + to_string(root->data) + lstr + rstr;
        if (s.length() > 3 && subtree.find(s) != subtree.end()) // >3 to avoid checking leaf nodes
            return "#";

        subtree.insert(s);
        return s;
    }
};
