#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct node{
    int data;
    struct node*next;
};

void display(struct node*ptr){
    while(ptr!=NULL){
        cout<<"element:"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
struct node*DeletionAtEnd(struct node*head){
    struct node*p=head;
    struct node*q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

int main(){
    struct node*head,*second,*third;
    head= (struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=66;
    head->next=second;

    second->data=77;
    second->next=third;

    third->data=88;
    third->next=NULL;

    display(head);
    head=DeletionAtEnd(head);
    display(head);

return 0;
}