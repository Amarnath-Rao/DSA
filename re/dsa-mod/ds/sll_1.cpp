#include<bits/stdc++.h>
using namespace std;
/*
Dynamic sizing: Lists can grow or shrink dynamically, whereas arrays have a fixed size & Easier to manipulate
Insertions & Deletion :O(1) & Traversal :O(n)
*/
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data=val;
        this->next=nullptr;
    }
};
class LinkedList{
    private:
    Node* head;
    public:
    LinkedList(){
        head=nullptr;
    }
    void insertFirst(int data){
        Node* newNode=new Node(data);
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
        while(temp->next){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void insertMiddle(int data){
        if(!head || !head->next){
        insertFirst(data);
        return;
        }
        Node *slow=head,*fast=head;
        while(fast&&fast->next){
            fast=fast->next->next;
            if(fast) slow=slow->next;
        }
        Node* newNode=new Node(data);
        newNode->next=slow->next;
        slow->next=newNode;
    }
    void insertAtNode(int nodeval,int data){
        Node *temp=head;
        while(temp&&temp->data!=nodeval){
            temp=temp->next;
        }
        if(!temp){
            cout<<"Node not found"<<endl;
            return;
        }
        Node *newNode=new Node(data);
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void deleteFirst(){
        if(!head){
            cout<<"EmptyList"<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    void deleteEnd(){
        if(!head){cout<<"EmptyList"<<endl;return;}
        if(!head->next){
            delete head;
            head=nullptr;
            return;
        }
        Node* temp=head;
        while(temp->next->next){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
    }
    void deleteNode(int key){
        if(!head) return;
        if(head->data==key){
            deleteFirst();
            return;
        }
        Node* temp=head;
        Node* cur=nullptr;
        while(temp && temp->data!=key){
            cur=temp;
            temp=temp->next;
        }
        if(!temp){
            cout<<"Not found\n";
            return;
        }
        cur->next=temp->next;
        delete cur;
    }
    void deleteMiddle(){
        if(!head || !head->next) return;
        Node *slow=head,*fast=head,*prev=nullptr;
        while(fast&&fast->next){
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;
        }
        if(prev) prev->next=slow->next;
        delete slow;
    }
    bool search(int data){
        Node* temp=head;
        while(temp){
            if(temp->data==data){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
    void print(){
        Node* temp=head;
        while(temp){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"nullptr"<<endl;
    }
    void sortList(){
        if(!head || !head->next) return;
        Node* cur=head;
        while(cur){
            Node* i=cur->next;
            while(i){
                if(cur->data>i->data){
                    swap(cur->data,i->data);
                }
                i=i->next;
            }
            cur=cur->next;
        }
    }
    void reverseList(){
        Node *prev=nullptr,*cur=head,*next=nullptr;
        while(cur){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        head=prev;
    }
};
int main(){
    LinkedList list;
    list.insertFirst(3);
    list.insertEnd(6);
    list.insertMiddle(4);
    list.insertAtNode(4,5);
    //if(list.search(3)) cout<<"elem available!"<<endl;
    //list.deleteNode(3);
    list.insertMiddle(9);
    list.insertMiddle(7);
    list.print();
    list.reverseList();
    list.print();
    list.reverseList();
}