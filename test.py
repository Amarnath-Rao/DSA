class Solution:
    def longSubarrWthSumDivByK(self, arr, n, k):
        sum = 0
        suffix = {0: n}
        ans = 0
        for i in range(n - 1, -1, -1):
            sum = (sum + (arr[i] % k) + k) % k

            if sum not in suffix:
                suffix[sum] = i
            else:
                ans = max(ans, suffix[sum] - i)
        return ans
    
"""
class Solution
{
    public:
    void backsorter(struct Node* & head){
        if(head==NULL)return;
        backsorter(head->next);
        Node * curr=head;
        Node * Next=head->next;
        int key=curr->data;
        while(Next!=NULL){
            if(Next->data <key){
                curr->data=Next->data;
                curr=Next;
                Next=Next->next;
            }
            else{
                break;
            }
        }
        curr->data=key;
    }
    Node* insertionSort(struct Node* head)
    {
        if(head==NULL || head->next==NULL)return head;
        backsorter(head);
        return head;
    }
    
};
"""