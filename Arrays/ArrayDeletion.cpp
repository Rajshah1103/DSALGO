#include<iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[ i ]<<endl;
    }
}

void Deletion(int arr[],int size,int index){
    for(int i=index;i<size-1;i++)
    {
        arr[i]=arr[i + 1];
    }
}

int main(){
    int arr[20]={20,30,40,50,60};
    int size=5, index=2;
    display(arr,size);
    Deletion(arr,size,index);
    size-=1;
    display(arr,size);
return 0;
}