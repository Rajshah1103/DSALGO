#include<iostream>
using namespace std;

void Sum(int *p,int n)  
{
    int sum=0;
     for(int i=0;i<n;i++){
        cin>>p[i];
     }
     for(int i=0;i<n;i++)
     {
        sum+=p[i];
     }
     cout<<"Sum of array is "<<" "<<sum;
}

int main(){
    int size=0;
    cout<<"Enter the size of array";
    cin>>size;
    int arr[size];
    Sum(arr,size);
return 0;
}