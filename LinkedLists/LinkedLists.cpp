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

    //for(i!=NULL;i=i->link;)
    //{
     //   cout<<"Element "<<i->data<<endl;
    //}
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
    fourth->next=NULL;

    display(head);
return 0;
}