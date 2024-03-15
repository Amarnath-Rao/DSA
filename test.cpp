class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
        // Code here
        if(*head == NULL || (*head)->next == NULL){
            return;
        }
        Node *temp = *head;
        Node *last = NULL;
        
        bool swapped;
        do{
            swapped = false;
            temp = *head;
            while(temp->next != last){
                if(temp->data > temp->next->data){
                    swap(temp->data, temp->next->data);
                    swapped = true;
                }
                temp = temp->next;
            }
            last = temp;
        } while(swapped);
    }
};