#include<iostream>
using namespace std;

int main(){
    int r1=0;
    int c1=0;
    int r2=0;
    int c2=0;
    int a[r1][c1];
    int b[r2][c2];
    int sum[r1][c2];
    cout<<"Enter the no of rows and columns"<<endl;
    cin>>r1>>c1>>r2>>c2;
    cout<<"Enter the first matrix"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<b[i][j]<<" ";
        }
    }
    cout<<endl;
    if(r1==r2&&c1==c2)
    {
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
            }
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<sum[i][j]<<" ";
        }
    }
return 0;
}