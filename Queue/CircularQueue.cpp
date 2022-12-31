#include<iostream>
using namespace std;

struct queue{
    int size;
    int f;
    int r;
    int*arr;
};

int isEmpty(struct queue*q)
{
    if(q->f==q->r){
        return 1;
    }
    else{
        return 0;
    }

}

int isFull(struct queue*q){
    if((q->r+1)%q->size==q->f){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct queue*q,int val){
    if(isFull(q)){
        //cout<<"Cannot enqueue beacuse queue is full"<<endl;
    }
    
    else{
        cout<<"enqueing element "<<" "<<val<<endl;
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
    }
}

int dequeue(struct queue*q){
    int a=-1;
    if(isEmpty(q)){
        cout<<"Queue is empty cannot perform dequeue";
    }
    else{
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
    }
    return a;
} 

int main(){
    struct  queue *q;
    int value=0;
    q->size=4;
    q->f=q->r=0;
    q->arr=new int(q->size);
    enqueue(q,11);
    enqueue(q,12);
    enqueue(q,13);
    //enqueue(q,14);
    cout<<"DEqueuing element "<<" "<<dequeue(q);
    cout<<endl;
    cout<<"DEqueuing element "<<" "<<dequeue(q);
    cout<<endl;
    cout<<"DEqueuing element "<<" "<<dequeue(q);
    cout<<endl;
    // cout<<"DEqueuing element "<<" "<<dequeue(q);
    // cout<<endl;
     enqueue(q,13);
     enqueue(q,15);
     enqueue(q,16);
     cout<<"DEqueuing element "<<" "<<dequeue(q);
    cout<<endl;
    cout<<"DEqueuing element "<<" "<<dequeue(q);
    cout<<endl;
    cout<<"DEqueuing element "<<" "<<dequeue(q);
    cout<<endl;
    if(isEmpty(q)){
        cout<<"Queue is Empty";
    }
    if(isFull(q)){
        cout<<"Queue is full"<<endl;
    }
return 0;
}