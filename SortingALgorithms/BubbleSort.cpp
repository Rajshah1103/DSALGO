#include<iostream>
using namespace std;

int main(){
int n=0;
int arr[n];
int temp=0;
cout<<"Enter the size of array"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"Before sorting"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
// implementation of bubble sort
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
cout<<endl;
cout<<"After sorting "<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}