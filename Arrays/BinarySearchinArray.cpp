#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int element)
{
    int mid,high,low;
    low=0;
    high=size-1;                                             
    while(low<=high){
        mid=(low+high)/2;                
        if(arr[mid]==element)
        {
         return mid;
        }
         if(arr[mid]<element)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
   
}

int main(){
    int arr[]={12,15,19,23,26,60,70,87,90};
    int size= sizeof(arr)/sizeof(int);
    cout<<size;
    int result=BinarySearch(arr,size,26);
    cout<<"The element is found at index no:"<<result<<endl;

return 0;
}