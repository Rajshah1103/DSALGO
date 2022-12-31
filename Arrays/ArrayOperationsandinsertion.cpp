/* Operations On Arrays:
 --->Traversal
 --->insertion
 --->Deletion
 --->searching */ 

#include<iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int ind_Insertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity)
    {
        return-1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
    
}

int main(){
    int arr[20]={7,8,12,27,88};
    int size=5, element=40, index=3;
    ind_Insertion(arr,size,element,20,index);
    size+=1;
    display(arr,size);
   

return 0;
}