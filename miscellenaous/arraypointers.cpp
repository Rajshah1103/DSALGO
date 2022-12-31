#include<iostream>
using namespace std;

int main(){

int num[5];
int*p=num;
for(int i=0;i<5;i++)
{
    cin>>p[i];
}
for(int i=0;i<5;i++)
{
    cout<<p[i]<<" ";
}

return 0;
}