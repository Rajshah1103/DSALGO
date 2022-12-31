#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{
    public: 
        int spanningTree(int V,vector<vector<int> >adj[]){
            priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
            vector<int>vis(V,0);
            vector<int>MST(V,-1);
            // weight,node
            pq.push({0,0});
            int sum = 0;
            while(!pq.empty()){
                auto it = pq.top();
                pq.pop();
                int node = it.second;
                int wt = it.first;
                if(vis[node]==1)continue;
                vis[node] =1;
                sum+=wt;
                for(auto it : adj[node]){
                    int adjNode = it[0];
                    int  edgeWt = it[1];
                    if(!vis[adjNode]){
                        pq.push({edgeWt,adjNode});
                        MST[adjNode] = node;
                    }
                }
            }
            for(int i=0;i<V;i++){
                cout<<MST[i]<<" "<<i;
            }
            return sum;
        }
};

int main(){

return 0;
}