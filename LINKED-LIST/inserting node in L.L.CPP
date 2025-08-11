#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(){
        /*BY DEFAULT SETTING DATA=0 AND NEXT TO NULL*/
        this->data=0;
        this->next=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
    }

};
void insertathead(node*&head,   node*&tail,int data){
    if(head==NULL){
        node* newnode=new node(data);
        head=newnode;
        tail=newnode;
        return ;
    }
    else{
         node* newnode= new node(data);
    newnode->next=head;
    head=newnode;

    }
   

}
void insertattail(node*&head, node*&tail,int data){
    if(head==NULL){
        node* newnode=new node(data);
        head=newnode;
        tail=newnode;
        return ;
    }
    else{
    node* newnode= new node(data);
    tail->next=newnode;
    tail=newnode;

    }
   

}
void print(node*&head){
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int main(){
    node*head=NULL;
    node*tail=NULL;
    insertathead(head,tail,10);
    insertathead(head,tail,20);
    insertathead(head,tail,30);
    insertathead(head,tail,40);
    insertattail(head,tail,50);
    
    print(head);

}