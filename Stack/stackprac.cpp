#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack*ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}
int isEmpty(struct stack*ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
} 

void push(struct stack*ptr,int val){
    if(isFull(ptr)){
        cout<<"Stack is Full Cannnot push new values"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack*ptr){
    if(isEmpty(ptr)){
        cout<<"Stack is Empty No Element to pop"<<endl;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main(){
    struct stack*s = new(struct stack);
    s->size = 50;
    s->top=-1;
    s->arr = new int(s->size);
    cout<<isEmpty(s)<<endl;
    push(s,11);
    push(s,22);
    push(s,33);
    cout<<"The popped element is"<<pop(s)<<endl;
    cout<<isEmpty(s)<<endl;
    cout<<isFull(s)<<endl;

return 0;
}