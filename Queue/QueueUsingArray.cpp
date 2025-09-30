#include<iostream>
using namespace std;
struct queue{
    int size;
    int f;
    int r;
    int*arr;
};
int isFull(struct queue*q){
    if(q->r==q->size-1)
    {
        return 1;
    }
    return 0;
    
}

int isEmpty(struct queue*q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue*q, int val)
{
    if(isFull(q)){
        cout<<"This Queue is Full"<<endl;
    }
    else
    {
        q->r=q->r+1;
        q->arr[q->r]=val;
    }
}

int dequeue(struct queue*q){
    int a=-1;
    if(isEmpty(q)){
        cout<<"The queue is empty"<<endl;
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}

int main(){
    struct queue *q;
    int value=0;
    q->size=10;
    q->f=q->r=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));
    enqueue(q,11);
    enqueue(q,12);
    cout<<"DEqueuing element "<<" "<<dequeue(q);
    cout<<endl;
    cout<<"DEqueuing element "<<" "<<dequeue(q);
    if(isEmpty(q)){
        cout<<"Queue is Empty";
    }
    if(isFull(q)){
        cout<<"Queue is full"<<endl;
    }
    

return 0;
}