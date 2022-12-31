#include<iostream>
using namespace std;

int main(){
    int r=0;
    int c=0;
    int r1=0;
    int c1=0;
    int arr[r][c];
    int arr1[r1][c1];
    int multi[r1][c];
    int sum=0;
    cout<<"Enter the no of rows:"<<endl;
    cin>>r;
    cout<<"Enter the no of columns:"<<endl;
    cin>>c;
    cout<<"Enter the no of rows for second array:"<<endl;
    cin>>r1;
    cout<<"Enter the no of columns for second array:"<<endl;
    cin>>c1;
    cout<<"Enter the elements for the first array"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"arr ["<<i<<"]["<<j<<"]"<<endl;
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the elements for second array"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"arr1["<<i<<"]["<<j<<"]"<<endl;
            cin>>arr1[i][j];
        }
    }
    if(r1==c){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c;j++){
                multi[i][j]=0;
                for(int k=0;k<r1;k++){
                   multi[i][j]+=arr[i][k]*arr1[k][j];
                }
            }

        }
           
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c;j++){
            cout<<multi[i][j]<<" ";
        }
    }
return 0;
}