#include<iostream>
using namespace std;
    
void PrintArray(int *A,int &s)
{
    for(int i=0;i<s;i++)
    {
        cout<<A[i]<<" ";
    }

}
void insertionsort(int *A,int &s)
{
    int key,j;
    for(int i=1;i<s;i++) // Loop for each passes 
    {
        // Loop for each pass
         key=A[i];
         j=i-1;
         while(j>=0 && A[j]>key)
         {
            A[j+1]=A[j];
            j--;
         }
         A[j+1]=key;
    }
}

int main(){
    // 4 5 6 7 3 2 
    int s=6;
    int A[s]={12,54,65,7,23,9};
    cout<<"Before InsertionSort"<<endl;
    PrintArray(A,s);
    insertionsort(A,s);
    cout<<endl;
    cout<<"After inseritonsort"<<endl;
    PrintArray(A,s);
return 0;
}