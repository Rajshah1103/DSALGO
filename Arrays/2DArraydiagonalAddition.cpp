#include<iostream>
using namespace std;

int main(){
    int r=0;
    int c=0;
    int arr[r][c];
    int arr1[r][c];
    int add[r][c];
    cout<<"Enter the no of rows:"<<endl;
    cin>>r;
    cout<<"Enter the no of columns:"<<endl;
    cin>>c;
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
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                add[i][j]=arr[i][j]+arr1[i][j];
            } 
        }
    }
    cout<<"The addition of Two Arrays is "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<add[i][j]<<"\t";
        }
    cout<<endl;
    }
        
    

return 0;
}