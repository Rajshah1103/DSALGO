#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// helps to find shortest path and can be used if the graph has negative weight or negative cycle

class solution{
    public:
            vector<int>bellman_ford(int V,vector<vector<int>>&edges,int S){
                vector<int>dist(V,1e9);
                dist[S] =0;
                for(int i=0;i<V-1;i++){
                    for(auto it: edges){
                        int u = it[0];
                        int v = it[1];
                        int wt = it[2];
                        if(dist[u]!=1e9 && dist[u]+wt<dist[v]){
                            dist[v] = dist[u]+wt;
                        }
                    }
                }
                // Nth iteraton to check negative cycle
                for(auto it :edges){
                    int u = it[0];
                    int v = it[1];
                    int wt =it[2];
                    if(dist[u]!=1e9 && dist[u]+wt<dist[v]){
                            return {-1};
                        }
                }

                return dist;
            }

};

int main(){

return 0;
}


// the intution or the process of the BellmanFord Algo 
// step 1: create a dist vector to store the shortest distance and initialze it with 1e9;
// step 2: u have to take no of vertex - 1 iterations iterate over the adjacency list and 
// store the node from,node to and edgeWt and check if d[node from]!=1e9 && dist[node from]+wt<dits[node to];
// if teh condition is satisfied update the value 
// Now for negative Cycle 
// iterate the graph again but this time till Nth cycle and check if any value is getting updated if getting updated means it has  negative cycle return -1
// else if no negative cycle return the dist 