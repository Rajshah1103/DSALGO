#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct node{
    int data;
    struct node*next;
};

void display(struct node*ptr){
    while(ptr!=NULL)
    {
        cout<<"Element "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

 struct node*InsertAtEnd(struct node*head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node*p=head;

    while(p->next!=NULL){
        p=p->next;

    }
    p->next=ptr;
    ptr->next=NULL;
    return head;

};    

int main(){
    struct node*head,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=66;
    head->next=second;

    second->data=88;
    second->next=third;

    third->data=5;
    third->next=NULL;
    display(head);
    head=InsertAtEnd(head,11);
    display(head);

return 0;
}