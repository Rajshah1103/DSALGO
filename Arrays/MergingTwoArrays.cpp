#include<iostream>
using namespace std;

int n=0;
int j=0;
void Getdata(int arr[])
{
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

}
void printdata(int arr[])
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void MergeSort(int arr[],int merge[])
{
     int k=0;
    for(int i=0;i<n;i++)
    {
        merge[k]=arr[i];
        k++;
    }
}
void printMerge(int merge[])
{
    for(int i=0;i<k;i++)
    {
        cout<<merge[i]<<" ";
    }
}

int main(){
    int arr[n];
    int arr1[j];
    int merge[k];
    Getdata(arr);
    printdata(arr);
    Getdata(arr1);
    printdata(arr1);
    MergeSort(arr,merge);
    printMerge(merge);
    MergeSort(arr1,merge);
    printdata(merge);
    


return 0;
}