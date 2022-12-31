#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1; 
}

int main(){
    int arr[]={12,34,66,78,90,87,76,56};
    int size= sizeof(arr)/sizeof(int);
    int result=LinearSearch(arr,size,87);
    cout<<"The Element is at index: "<<result<<endl;

return 0;
}