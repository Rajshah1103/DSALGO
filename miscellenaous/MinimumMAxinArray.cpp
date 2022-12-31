#include<iostream>
using namespace std;

int main(){
int max=0;
int min=999;
int n=0;
cout<<"enter the size of array"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
// code to find max of the array
for(int i=0;i<n;i++)
{
    if(max<arr[i])
    {
        max=arr[i];
    }
}
for(int i=0;i<n;i++)
{
    if(min>arr[i])
    {
        min=arr[i];
    }
}

cout<<"The maximum of array is: "<<max<<endl;
cout<<"The minimum of array is: "<<min<<endl;

return 0;
}