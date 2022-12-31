#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct node{
    int data;
    struct node*next;
    struct node*previous;
};

void display(struct node*head){
    struct node*p=head;
    struct node*q;
    while(p!=NULL)
    {
        cout<<"Element: "<<p->data<<endl;
        q=p;
        p=p->next;   
    }
    while(q!=NULL)
        {
        cout<<"Element:"<<q->data<<endl;
        q=q->previous;
        }
    
   
}



    

int main(){
    struct node*head,*second,*third,*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=11;
    head->next=second;
    head->previous=NULL;

    second->data=22;
    second->next=third;
    second->previous=head;

    third->data=33;
    third->next=fourth;
    third->previous=second;

    fourth->data=44;
    fourth->next=NULL;
    fourth->previous=third;

    display(head);
    


return 0;
}