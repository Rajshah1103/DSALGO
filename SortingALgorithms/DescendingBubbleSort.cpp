#include<iostream>
using namespace std;

int main(){
int n=0;
int arr[n];
int temp=0;
cout<<"Enter the size of array"<<endl;
cin>>n;
cout<<"enter the elements in the array"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
// implementation of bubble sort in descending order
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-1;j++)
    {
        if(arr[j]<arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
cout<<"Array in descending order is "<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}