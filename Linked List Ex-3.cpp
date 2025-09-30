//Tanmay Ambudkar
#include<iostream>
using namespace std;
class Link {
    public:
    int data;
    Link*next;

    Link(int num){
        data=num;
        next=NULL;
    }
};
void insert_tail(Link*&head, int data){ 
    Link*new_node=new Link(data);
    if(head==NULL){
        head=new_node;
    } else {
        Link*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
}
void disp(Link*head){
    Link*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Link*head=NULL;
    insert_tail(head,20); // Changed to insert_tail
    disp(head);
    insert_tail(head,21); // Changed to insert_tail
    disp(head);
    insert_tail(head,22); // Changed to insert_tail
    disp(head);
}