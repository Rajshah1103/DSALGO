#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int*arr;
};

int isFull(struct stack*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        cout<<"Stack is Full"<<endl;
    }
}

int isEmpty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        cout<<"Stack is Empty"<<endl;
    }
}

int main(){
    struct stack*s;
    s->size=50;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    isEmpty(s);

return 0;
}