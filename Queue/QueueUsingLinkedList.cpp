#include<iostream>
using namespace std;

struct node*f=NULL;
struct node*r=NULL;


struct node{
    int data;
    struct node*next;
};

void traversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element is "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

void enqueue(int val)
{
    struct node*n=new(struct node);
    if(n==NULL)
    {
        cout<<"Queue is Full"<<endl;
    }
    else{
        n->data=val;
        n->next=NULL;
    }
    if(f==NULL)
    {
        f=r=n;
    }
    else{
        r->next=n;
        r=n;
    }
}
int dequeue()
{
    int val=-1;
    struct node*ptr=f;
    if(f==NULL)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else{
        f=f->next;
        val=ptr->data;
        free(ptr);
        return val;
    }
}

int main(){
    traversal(f);
    enqueue(11);
    enqueue(12);
    enqueue(13);
    enqueue(14);
    traversal(f);
    cout<<"Dequeuing Element"<<" "<<dequeue()<<endl;

return 0;
}