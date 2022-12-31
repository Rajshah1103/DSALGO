#include<iostream>
#include<string>
#include<iomanip>

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
        return 1;
    }
    return 0;
}

int isEmpty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack*ptr,int val)
{
    if(isFull(ptr))
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int pull(struct stack*ptr)
{
    if(isEmpty(ptr))
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack*ptr,int i)
{
    if(ptr->top-i+1<0)
    {
        cout<<"Not Valid"<<endl;
    }
    else
    {
        return ptr->arr[ptr->top-i+1];
    }
} 

int main(){
    struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    push(sp,87);
    push(sp,11);
    push(sp,86);
    push(sp,22);
    cout<<peek(sp,3);
return 0;
}
