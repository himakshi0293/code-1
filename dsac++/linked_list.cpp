#include<bits/stdc++.h>
using namespace std;

class node{ //defining nodes ith data and pinters
    public:
    int data;
    node* next; //creating pointer
    
    node(int val){
        data =val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}

void display(node* head ){
    node *temp =head;
     while(temp!=NULL){
         cout<<temp->data<<" -> ";
         temp= temp->next;
     }
     cout<<endl;
}

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    return 0;
}