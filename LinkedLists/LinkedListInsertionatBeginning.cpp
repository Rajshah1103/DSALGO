#include<iostream>
#include<string>
#include<iomanip>
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

struct node*insertAtfirst(struct node*head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->link=head;
    ptr->data=data;
    return ptr;
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
    head=insertAtfirst(head,11);
    display(head);
    
return 0;
}