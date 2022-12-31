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
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

struct node*DeletionOfGivenValue(struct node*head,int value){
    struct node*p=head;
    struct node*q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
}

int main(){
    struct node*head,*second,*third,*fourth,*fifth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));

    head->data=11;
    head->next=second;

    second->data=22;
    second->next=third;

    third->data=33;
    third->next=fourth;

    fourth->data=44;
    fourth->next=fifth;

    fifth->data=55;
    fifth->next=NULL;

    display(head);
    head=DeletionOfGivenValue(head,33);
    display(head);
    
return 0;
}