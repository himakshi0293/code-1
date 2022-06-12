#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    
    node(int val){
        data = val;
        next=NULL;
        prev=NULL;
    }
};

void insertathead(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    if(head!=NULL){
    head->prev=n;
    }
    head=n;
}

void insertatend(node* &head, int val){
    if(head==NULL){
        insertathead(head,val);
        return;
    }
    
    node* n = new node(val);
    node* temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    temp->next=n;
    n->prev=temp;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout <<temp->data <<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* head=NULL;
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    display(head);
    insertathead(head,5);
    display(head);
    
    return 0;
}