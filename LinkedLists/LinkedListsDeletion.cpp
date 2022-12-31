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

struct node*DeleteFirst(struct node*head){
    struct node*ptr=head;
    head=head->next;
    free(ptr);
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
    cout<<"Linked list After Deletion"<<endl;
    head=DeleteFirst(head);
    display(head);
 
return 0;
}