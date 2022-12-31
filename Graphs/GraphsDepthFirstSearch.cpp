#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
            vector<int> dfsOfGraph(int v,vector<int> adj[]){
                vector<int> res;
                int vis[v]={0};
                int start = 0;
                dfs(v,adj,start,res,vis);
                return res;

            }
            void dfs(int v,vector<int> adj[],int start,vector<int> &res,int vis[]){
                res.push_back(start);
                vis[start] = 1;
                for(auto it : adj[start]){
                    if(!vis[it]){
                        dfs(v,adj,it,res,vis);
                    }
                }

            }
};

int main()
{
    int V,e;     // v for  vertices and e for edges
    cin>>V>>e;
    vector<int> adj[V];
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    solution obj;
    vector<int> ans = obj.dfsOfGraph(V,adj);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;

}
