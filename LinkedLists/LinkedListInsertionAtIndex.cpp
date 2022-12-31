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

struct node*insertAtIndex(struct node*head,int data,int index){
    struct node*ptr=new(struct node);
    struct node*p=head;
    int i=0;

    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;

}

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
    head=insertAtIndex(head,11,2);
    display(head);
return 0;
}