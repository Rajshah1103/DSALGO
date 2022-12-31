#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct node{
    int data;
    struct node*link;
};

void display(struct node*ptr){
    while(ptr!=NULL)
    {
        cout<<"Element "<<ptr->data<<endl;
        ptr=ptr->link;
    }
}

struct node*insertAfterNode(struct node*head,struct node*Previousnode,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=Previousnode->link;
    Previousnode->link=ptr;

    return head;
}

int main(){
    struct node*head,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=66;
    head->link=second;

    second->data=88;
    second->link=third;

    third->data=5;
    third->link=NULL;
    display(head);
    head=insertAfterNode(head,second,11);
    display(head);

return 0;
}