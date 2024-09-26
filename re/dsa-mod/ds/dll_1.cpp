#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node*next;
    Node(int val){
        this->data = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
class DoublyLinkedList{
    private:
    Node* head;
    public:
    DoublyLinkedList(){
        this->head=nullptr;
    }
    void insertFirst(int data){
        Node* newNode=new Node(data);
        if(head) head->prev=newNode;
        newNode->next=head;
        head=newNode;
    }
    void insertEnd(int data){
        Node* newNode=new Node(data);
        if(!head){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next)temp=temp->next;
        temp->next=newNode;
        newNode->prev=temp;
    }
    void insertAtNode(int nodeval,int data){
        Node* temp=head;
        while(temp && temp->data!=nodeval) temp=temp->next;
        if(!temp) cout<<"Node not found!\n";
        Node* newNode=new Node(data);
        newNode->next=temp->next;
        newNode->prev=temp;
        if(temp->next) temp->next->prev=newNode;
        temp->next=newNode;
    }
    void insertMiddle(int data) {
        if (!head || !head->next) {
            insertEnd(data);
            return;
        }
        Node *slow = head, *fast = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            if (fast) slow = slow->next;
        }
        Node* newNode = new Node(data);
        newNode->next = slow->next;
        newNode->prev = slow;
        if (slow->next) slow->next->prev = newNode;
        slow->next = newNode;
    }
    void deleteFirst(){
        if(!head) cout<<"Empty!";
        Node* temp=head;
        head=head->next;
        if(head) head->prev=nullptr;
        delete temp;
    }
    void deleteEnd(){
        if(!head) cout<<"Empty!";
        if(!head->next){
            delete head;
            head=nullptr;
            return;
        }
        Node* temp=head;
        while(temp->next) temp=temp->next;
        temp->prev->next=nullptr;
        delete temp;
    }
    void deleteMiddle(){
        if(!head || !head->next) return;
        Node *slow=head,*fast=head;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        if(slow->prev) slow->prev->next=slow->next;
        if(slow->next) slow->next->prev=slow->prev;
        if(slow==head) head=slow->next;
        delete slow;
    }
    void deleteNode(int key){
        if(!head) return;
        if(head->data==key){
            deleteFirst();
            return;
        }
        Node* temp=head;
        while(temp && temp->data!=key) temp=temp->next;
        if(!temp) cout<<"Not found!";
        if(temp->prev) temp->prev->next=temp->next;
        if(temp->next) temp->next->prev=temp->prev;
        delete temp;
    }
    bool search(int key) {
        Node* temp = head;
        while (temp) {
            if (temp->data == key) return true;
            temp = temp->next;
        }
        return false;
    }
    void print() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    void sortList() {
        if (!head || !head->next) return;
        Node* current = head;
        while (current) {
            Node* index = current->next;
            while (index) {
                if (current->data > index->data) {
                    swap(current->data, index->data);
                }
                index = index->next;
            }
            current = current->next;
        }
    }
    void reverseList(){
        Node *temp=nullptr;
        Node *cur=head;
        while(cur){
            temp=cur->prev;
            cur->prev=cur->next;
            cur->next=temp;
            cur=cur->prev;
        }
        if(temp) head=temp->prev;
    }
};
int main() {
    DoublyLinkedList list;
    list.insertFirst(3);
    list.insertFirst(1);
    list.insertEnd(5);
    list.insertMiddle(4);
    list.print();
    list.deleteNode(3);
    list.print();
}

/*
Doubly Linked List (std::list):
push_back(x) – Adds element x to the end.
push_front(x) – Adds element x to the front.
pop_back() – Removes the last element.
pop_front() – Removes the first element.
front() – Returns the first element.
back() – Returns the last element.
insert(it, x) – Inserts x before the position it.
erase(it) – Erases the element at position it.
reverse() – Reverses the order of the elements.
size() – Returns the number of elements.
empty() – Checks if the list is empty.
*/