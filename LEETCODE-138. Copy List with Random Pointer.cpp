
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;   
        unordered_map<Node*, Node*> on;
        Node* curr = head;
        while (curr) {
            on[curr] = new Node(curr->val);
            curr = curr->next;
        }
        curr = head;
        while (curr) {
            on[curr]->next = on[curr->next];
            on[curr]->random = on[curr->random];
            curr = curr->next;
        }
        return on[head];
    }
};