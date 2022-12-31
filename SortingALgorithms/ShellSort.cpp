#include<iostream>
using namespace std;

void printArray(int *A,int &n){
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;


}

void shellsort(int *A,int &n){
   for(int gap = n/2;gap>0;gap/=2){
    for(int i=gap;i<n;i+=1)
    {
        int temp = A[i];
        int j;
        for(j=i;j>=gap && A[j-gap]>temp; j-=gap){
            A[j] = A[j-gap];
        }
        A[j] = temp;
    }
   }
}

int main(){
    int arr[] = {12,34,54,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< "Array Before Sorting "<<endl;
    printArray(arr,n);
    shellsort(arr,n);
    cout<<"Array after Sorting"<<endl;
    printArray(arr,n); 

return 0;
}