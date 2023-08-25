#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
Node* getNode(int data){
    Node* n=new Node;
    n->data=data;
    n->next=n->prev=NULL;
    return n;
};
void push(Node** head,Node* n){
    n->prev=NULL;
    n->next=*head;
    if((*head)!=NULL){
        (*head)->prev=n;
    }
    (*head)=n;
}
Node* reverse(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* rest=reverse(head->next);
    head->next->next=head;
    head->prev=head->next;
    head->next=NULL;
    return rest;
}
void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    Node* head=NULL;
    push(&head,getNode(1));
    push(&head,getNode(2));
    push(&head,getNode(3));
    push(&head,getNode(4));
    cout<<"Original list: ";
    printList(head);
    head=reverse(head);
    cout<<"Reversed list: ";
    printList(head);
}
