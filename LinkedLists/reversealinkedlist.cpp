#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
};

void display(struct node*p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

struct node*reverse(struct node*head)
{
    node*current=head;
    node*next=NULL;
    node*prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}


int main(){
    struct node*head,*second,*third,*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=NULL;
    cout<<endl;
    cout<<"After reversing"<<endl;
    head=reverse(head);
    display(head);

    
return 0;
}