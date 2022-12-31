#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
 // 1 Undirected Graph 
 int u,v,w,N,E;
 cin>>N>>E; // N number of nodes and E number of edges
//  vector<vector<int> >vec(N);  // for vector of vector we have to use () this operator and not []
//  for(int i=0;i<E;i++){
//     cin>>u>>v;
//     vec[u].push_back(v); // () this creates a dynamic vector of given size on the pther hand [] this creates a static array of size which cannot be changed afterwards
//     // vec[v].push_back(u);

//  }
 vector<vector<int> > wt(N);
 for(int i=0;i<E;i++){
         cin>>u>>v>>w;
          wt[u].push_back(v);
          wt[u].push_back(w);
 }
 /*
 for(int i=0;i<E;i++){
    cout<<i<<"->";
    for(int j=0;j<vec[i].size();j++){
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
 }
// converting for vector of vector to vector of arrays 
vector<int> adj[N];
for(int i=0;i<vec.size();i++){
   for(int j=0;j<vec[i].size();j++){
      adj[i].push_back(vec[i][j]);
   }
}

for(int i=0;i<E;i++){
   cout<<i<<" ";
   for(int j=0;j<adj[i].size();j++){
      cout<<adj[i][j]<<" ";
   }
   cout<<endl;
}*/
for(int i=0;i<E;i++){
   cout<<i<<" ";
   for(int j=0;j<wt[i].size();j++){
      cout<<wt[i][j]<<" ";
   }
   cout<<endl;


}
return 0;
}


// 0 1
// 0 2
// 1 3
// 2 3
// 3 4
// 4 5