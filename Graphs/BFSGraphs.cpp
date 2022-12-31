#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
        vector<int> bfsOfGraph(int V,vector<int> adj[]){
              vector<int> res;
            queue<int>q;
            int vis[V]={0};
            int start = 1;
            q.push(start);
            vis[start] = 1;
            while(!q.empty()){
                int node = q.front();
                res.push_back(node);
                q.pop();
                for(auto it: adj[node]){
                    if(!vis[it]){
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }
            return res;
        }
};

int main(){
    int V,E;
    cin>>V>>E;
    int v,u;
    vector<int> adj[V];
    for(int i=0;i<E;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    solution obj;
    vector<int> ans = obj.bfsOfGraph(V,adj);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

return 0;
}