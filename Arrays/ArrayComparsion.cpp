#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int max,min;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    min=arr[0];
    for(int i=0;i<5;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    for(int i=0;i<5;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<min<<endl;
    cout<<max<<endl;
return 0;
}