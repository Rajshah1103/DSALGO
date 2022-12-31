#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{
    private:
        int timer = 1;

        void dfs(int node,int parent,vector<int>adj[],vector<int>&vis,int tim[],int low[],vector<vector<int> >&bridges){
            vis[node] = 1;
            tim[node] = low[node] = timer;
            timer++;
            for(auto it : adj[node]){
                if(it==parent){
                    continue;
                }
                if(!vis[it]){
                    dfs(it,node,adj,vis,tim,low,bridges);
                    low[node] = min(low[node],low[it]);
                    // can node to it be bridge
                    if(low[it]>tim[node]){
                            bridges.push_back({it,node});
                    }
                }
                else{
                    low[node] = min(low[node],low[it]);
                }
            }
        }
    public: 
        vector<vector<int> >Tarjan(int n,vector<vector<int>>&connect){
            vector<int>adj[n];
            // for(auto it : connect){
            //     adj[it[0]].push_back(it[1]);   //this method for online compilers 
            //     adj[it[1]].push_back(it[0]);
            // }
            for(int i=0;i<connect.size();i++){
                for(int j = 0;j<connect[i].size();j++){     // this method for vs code 
                    adj[i].push_back(connect[i][j]);
                }
            }
            for(int i=0;i<n;i++){
                cout<<i<<" ";                      // this is the way to print vector<int> adj[n] i.e. vector of arrays
                for(auto it : adj[i]){
                    cout<<it<<" ";
                }
                cout<<endl;
            }
            vector<int>vis(n,0);
            int tim[n];
            int low[n];
            vector<vector<int> >bridges;
            dfs(0,-1,adj,vis,tim,low,bridges);
            return bridges;
        }
};

int main(){
    int V,E;
    int u,v;
    cin>>V>>E;
    int i=0;
    vector<vector<int>>connect(V);
    for(int i=0;i<E;i++){
        cin>>u>>v;
        connect[u].push_back(v);
         connect[v].push_back(u);
    }
        vector<vector<int> > ans;
        solution obj;
        ans = obj.Tarjan(V,connect);
       for(int i=0;i<ans.size();i++){
        for(auto it : ans[i]){                     // this is the way to print vector<vector<int>>v
            cout<<it<<" ";
        }
        cout<<endl;
       }


return 0;
}
// Test Case 0
//  [[0,1],[1,2],[2,0],[1,3]] 
// output:  1,3 or 3,1


// Test Case 1

//  (1, 0);
//  (0, 2);
//  (2, 1);
//  (0, 3);
//  (3, 4); 
// output : (3,4) (0,3);