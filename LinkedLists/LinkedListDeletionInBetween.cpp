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

struct node*Deletion(struct node*head,int index){
    struct node*p=head;
    struct node*q=head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;

}

int main(){
    struct node*head,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=66;
    head->next=second;

    second->data=77;
    second->next=third;

    third->data=88;
    third->next=NULL;

    cout<<"Linked List Before Deletion"<<endl;
    display(head);

    cout<<"Linked List After Deletion"<<endl;
    head=Deletion(head,1);
    display(head);
return 0;

}