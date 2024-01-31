class Solution:
    def resolves(self, a, b, Operator):
        if Operator == '+':
            return a + b
        elif Operator == '-':
            return a - b
        elif Operator == '*':
            return a * b
        return int(a / b)

    def evalRPN(self, tokens):
        stack = []
        for token in tokens:
            if len(token) == 1 and ord(token) < 48:
                integer2 = stack.pop()
                integer1 = stack.pop()
                operator = token
                resolved_ans = self.resolves(integer1, integer2, operator)
                stack.append(resolved_ans)
            else:
                stack.append(int(token))
        return stack.pop()

"""

class Solution

{

   

    public:

        //Function to insert string into TRIE.

        void insert(struct TrieNode *root, string key)

        {

            // code here

            if(key.size()==0){

                root->isLeaf=true;

                return;

            }

            if(root->children[key[0]-'a']!=NULL){

                insert(root->children[key[0]-'a'],key.substr(1));

            }

            else{

                root->children[key[0]-'a']=new TrieNode();

                insert(root->children[key[0]-'a'],key.substr(1));

            }

        }

        

        //Function to use TRIE data structure and search the given string.

        bool search(struct TrieNode *root, string key) 

        {

            // code here

            if(key.size()==0 && root->isLeaf==true){

                return true;

            }

            if(root->children[key[0]-'a']!=NULL){

                return search(root->children[key[0]-'a'],key.substr(1));

            }

            else{

                return false;

            }

        }

};

"""