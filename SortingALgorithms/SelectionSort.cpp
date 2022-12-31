#include<iostream>
using namespace std;

void PrintArray(int *A,int &s)
{
    for(int i=0;i<s;i++)
    {
        cout<<A[i]<<" ";
    }

}

void selectionsort(int*A,int &s)
{
    int indexofmin,temp;
    cout<<"Running selection sort"<<endl;
    for(int i=0;i<s-1;i++)
    {
        indexofmin=i;
        for(int j=i+1;j<s;j++)
        {
            if(A[j]<A[indexofmin])
            {
                indexofmin=j;
            }
        }
        // swap a[i]and indexofmin
        temp=A[i];
        A[i]=A[indexofmin];
        A[indexofmin]=temp;    
    }
}

int main(){
    int size=5;
    int A[size]={3,5,2,13,12};
    PrintArray(A,size);
    cout<<endl;
    selectionsort(A,size);
    PrintArray(A,size);

return 0;
}