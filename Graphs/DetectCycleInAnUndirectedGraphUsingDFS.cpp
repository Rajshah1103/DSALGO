#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class soluton{
    private:
       bool dfs(int node,int parent,int vis[],vector<int>adj[]){
        vis[node] = 1;
        for(auto adjNode : adj[node]){
            if(!vis[adjNode]){
                if(dfs(adjNode,node,vis,adj)==true){
                    return true;
                }
            }
            else if(adjNode != parent){
                    return true;
            }
        }
        return false;
       }
    public:
        bool isCycle(int V,vector<int>adj[]){
                int vis[V] = {0};
                for(int i=0;i<V;i++){
                    if(!vis[i]){
                        if(dfs(i,-1,vis,adj)==true){
                            return true;
                        }
                    }
                }
                return false;
        }
};

int main(){

return 0;
}

//  intution or the stpes for the Detect cycle in and undirectedGraph 
// step 1:  create an adjlist for the graph 
// step 2:  create a vis array to store the value whether the graph is visited or not
// step 3: perform dfs on the node which is not being visited and store the parent as well in the case of src the parent will be -1
// step 4: traverse the graph for the adjnodes of the currnode and check whether it is visited or not 
// step 5: if not visitd call the dfs for it and pass the currnode as its parent 
// step 6:  if it is visited check whether it has the same parent or not incase different parent return true i.e. cycle is detected or else return false 