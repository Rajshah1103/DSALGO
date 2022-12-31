#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct node{
    int data;
    struct node*next;
};

void display(struct node*head)
{
    struct node*p=head;
    do
    {
        cout<<"Element:"<<p->data<<endl;
        p=p->next;
    } while (p!=head);
    {
        p=p->next;
    }
    
}

struct node*InsertionAtFirst(struct node*head, int data){
    struct node*p=(struct node*)malloc(sizeof(struct node));
    p->data=data;

    struct node*ptr=head->next;
   while(ptr->next!=head)
   {
    ptr=ptr->next;
   }
   ptr->next=p;
   p->next=head;
   return ptr;
    
}

struct node*InsertoninMiddle(struct node*head,int data,int index){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
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

struct node*InsertionAtEnd(struct node*head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    ptr->data=data;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return head;
    
}

struct node*InsertionAfterNode(struct node*head,struct node*PreviousNode,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=PreviousNode->next;
    PreviousNode->next=ptr;
    return head;

}

int main(){
    struct node*head,*second,*third,*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=11;
    head->next=second;

    second->data=22;
    second->next=third;

    third->data=33;
    third->next=fourth;

    fourth->data=44;
    fourth->next=head;

    cout<<"Before insertion"<<endl;
    display(head);
    cout<<"AFter Insertion"<<endl;
    head=InsertionAfterNode(head,third,55);
    display(head);

return 0;
}