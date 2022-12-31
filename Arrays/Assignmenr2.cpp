#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int insertion(int arr[],int element,int index,int size)
{
    for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}

int main(){
    int size=6;
    int arr[size]={22,33,44,55,66,77};
    int element=11;
    int index=0;
    insertion(arr,element,index,size);
    size+=1;
    display(arr,size);

return 0;
}