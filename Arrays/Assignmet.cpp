#include<iostream>
using namespace std;

int main(){
    int size=0;
    int index=0;
    int arr[size];
    cout<<"enter the sie of array"<<endl;
    cin>>size;
    cout<<"Enter the index number "<<endl;
    cin>>index;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        cout<<arr[i]<<endl;
    }
    for(int i=index;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    size-=1;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
return 0;
}