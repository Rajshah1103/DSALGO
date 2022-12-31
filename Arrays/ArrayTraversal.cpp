#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main(){
    int points[]={19,20,35,7,6};
    display(points,5);
return 0;
}