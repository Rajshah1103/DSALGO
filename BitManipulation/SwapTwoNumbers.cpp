#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    cout<<"Numbers before swapping are"<<endl;
    cout<<a<<" "<<b<<endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"the numbers after swapping is"<<endl;
    cout<<a<<" "<<b;



return 0;
}