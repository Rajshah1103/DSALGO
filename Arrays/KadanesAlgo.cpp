#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> arr;
  int n;
  cin>>n;
  int k;
  int sum = 0;
  int maxi = INT_MIN;
  for(int i=0;i<n;++i){
    cin>>k;
    arr.push_back(k);
  }
  /*for(auto it : arr){
    sum+=it;
    maxi = max(sum,maxi);
    if(sum<0){
        sum = 0;
    }
  }
  cout<<maxi<<endl;*/
  // for(int i=0;i<n;i++){
  //   int sum = 0;
  //   for(int j=i;j<n;j++){
  //     sum+=arr[j];
  //     maxi = max(sum,maxi);
  //   }
  // }
  // cout<<maxi<<endl;


  // kadanes algo implement 
  for(int i=0;i<n;i++){
    sum+=arr[i];
    if(maxi<sum){
      maxi = sum;
    }
    if(sum<0) sum = 0;
  }

  cout<<maxi<<endl;
return 0;
}