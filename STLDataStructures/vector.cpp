#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // here a vector is storing another vector inside of it 
        vector<vector<int> > v(3,vector<int>());
        // int n;
        // cin>>n; // for the size of the vector 
        for(int i=0;i<3;++i){
            // int N;
            // cin>> N;
            // vector<int>temp;
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }        
    }
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                cout<<v[i][j]<<" ";
            }
                cout<<endl;
        }
        vector<vector<int> >r(3);
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
            r[i].push_back(v[i][j]);
            }
        }
       
        for(int i=0;i<3;i++){
            for(int j = 0;j<r[i].size();j++){
                cout<<r[i][j]<<" ";
            }
            cout<<endl;
        }
         return 0;
}
