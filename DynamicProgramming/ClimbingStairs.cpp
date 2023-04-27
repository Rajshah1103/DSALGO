#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countDistinctWaytoClimbStairs(long long n){
     if(n==0) return 1;
     if(n==1) return 1;
     int left = countDistinctWaytoClimbStairs(n-1);
     int right = countDistinctWaytoClimbStairs(n-2);
     return left+right;
}

int main(){
    long long nums;
    cin>>nums;
    cout<<countDistinctWaytoClimbStairs(nums);

return 0;
}