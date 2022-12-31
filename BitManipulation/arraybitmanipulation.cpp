#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,1,2,5,6,5,7,7,6};
    // the question for bit mainpualtion is every integer in the array occurs twice and only one integer occurs once you have to find the element that occurs once 
    // we will use xor because the every element except one element occurs twice and xor of two numbers is zero 
    // implemnetation
    int ans = 0;
    int size (sizeof(arr)/sizeof(arr[0]));
    for(int i=0;i<size;i++){
        ans =  ans^arr[i];
    }
    cout<<ans;


return 0;
}