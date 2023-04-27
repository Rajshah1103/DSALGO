#include<bits/stdc++.h>
using namespace std;

void sentinel(int arr[],int key,int size){
    int start = arr[0];
    arr[0] = key;
    if(arr[0]==key){
        cout<<"Element is present in the array"<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }
    arr[0] = start;
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size  = sizeof(arr)/sizeof(arr[0]);
    sentinel(arr,10,size);
    return 0;
}