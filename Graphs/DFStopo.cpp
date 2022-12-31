#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void dfs(int node,vector<bool>&vis,stack<int> &s,vector<int>adj[]){
            vis[node] = true;
            s.push(node);
            for(auto it : adj[node]){
                if(!vis[it]){
                    dfs(it,vis,s,adj);
                }
            }
    }
    vector<int> toposort(int V,vector<int>adj[]){
        vector<bool> vis(V,false);
        stack<int> s;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,vis,s,adj);
            }
        }
        vector<int> ans;
        while(!s.empty()){
            int curr  = s.top();
            ans.push_back(curr);
            s.pop();
        }
        return ans;
    }
              
};

int main(){
    int V,E;                                                 // the other way of same 
    cin>>V>>E;                                                // cin>>V>>E;
    int x,y;                                                    // int x,y;
    vector<int> adj[V];                                         //vector<vector<int> > adjL(V)
    for(int i=0;i<E;i++){                                       //for(int i=0i<E;i++){
        cin>>x>>y;                                                   //cin>>x>>y;
        adj[x].push_back(y);                                        //adj[x].push_back(y)
    }                                                               //}
    solution s;
    vector<int>ans =  s.toposort(V,adj);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

return 0;
}



// The Process or the intution of Topo Sort
// step 1: create a adj List of the graph 
// step 2:  create a vis array to store if the node is already visited or not 
// step 3: create a stack to store the nodes which are already visited 
// step 4: perform DFS on the graph and store the visited nodes into the stack 
// step 5: empty the stack and store the elements from the stack into and vector and return the vector 


// 0 1
// 0 2
// 1 3
// 2 3
// 3 4
// 4 5