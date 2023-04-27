#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int A[],int low,int mid,int high){
    int i,j,k;
    int B[100];
    i = low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(A[i]<A[j]){
            B[k] = A[i];
            i++;
            k++;
        }
        else{
          B[k] = A[j];
          k++;
          j++;
        }
    }
    while(i<=mid){
        B[k] = A[i];
        k++;
        i++;
    } while(j<=high){
        B[k] = A[j];
        k++;
        j++;
    }
    for(int i=low;i<=high;i++){
        A[i] = B[i];
    }
}

void mergeSort(int A[],int l,int h){
    int mid = 0;
    if(l<h){
        mid = l+h/2;
        mergeSort(A,l,mid);
        mergeSort(A,mid+1,h);
        merge(A,mid,l,h);

    }
}

void printArray(int A[],int s){
    for(int i=0;i<s;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int A[]  ={9,14,4,8,7,5,6};
    int n = 7;
    printArray(A,n);
    mergeSort(A,0,6);
    printArray(A,n);


    return 0;
}