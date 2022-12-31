#include<iostream>
#include<iomanip>
#include<iostream>

using namespace std;

struct node{
    int data;
    struct node*next;
};

void display(struct node*ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element:"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int isEmpty(struct node*ptr)
{
    if(ptr==NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(struct node*ptr)
{
    struct node*n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        return 1;
    }
    return 0;
}

struct node*push(struct node*top,int x)
{
    if(isFull(top))
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        struct node*p=(struct node*)malloc(sizeof(struct node));
        p->data=x;
        p->next=top;
        top=p;
        return top;
    }
}

int pop (struct node*ptr)
{
    if(isEmpty(ptr))
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        struct node*N=ptr;
        ptr=ptr->next;
        int x=N->data;
        free(N);
        return x;

    }
}

int main(){
   struct node*top=NULL;
   top=push(top,11);
   top=push(top,22);
   top=push(top,33);
   display(top);
   cout<<"Element popped is"<<pop(top)<<endl;

return 0;
}