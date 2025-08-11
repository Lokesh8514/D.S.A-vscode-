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
void print(node*&head){
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }

}
int main(){
    node*first=new node(1); //CREATING A NODE SEPERATLY 
     node*second=new node(2);
      node*third=new node(3);
       node*fourth=new node(4);

       first->next=second; //POINTING THE NEXT OF A NODE TO NEXT NODE
       second->next=third;
       third->next=fourth;
       print(first);

}