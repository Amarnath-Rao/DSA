class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        Node* cur=*head;
        int c=0;
        if(*head==nullptr) return true;
        while(cur!=nullptr){
            cur=cur->next;
            c+=1;
        }
        return (c%2==0);
        // Code here
    }
};