#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
  
        bool dfs(int node,int col,int color[],vector<int> adj[]){
            color[node] = col;
            for(auto it : adj[node]){
                if(color[it]==-1){
                    if(dfs(it,!col,color,adj)==false){
                        return false;
                    }
                }
                else if(color[it]==col){
                    return false;
                }
            }
            return true;
        }
        bool isBipartite(int V,vector<int>adj[]){
            int color[V];
            for(int i=0;i<V;i++){
                color[i]=-1;
            }
            for(int i=0;i<V;i++){
                if(color[i]==-1){
                    if(dfs(i,0,color,adj)==false){
                        return false;
                    }
                }
            }
            return true;
        }
};

int main(){
    int V,E;
    cin>>V>>E;
    int x,y;
    vector<int> adj[V];
    for(int i=0;i<E;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    solution obj;
    bool ans = obj.isBipartite(V,adj);
    if(ans==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}


// the intution or the process for checking bipartite graph using DFS
// step 1: create adj List or the matrix of the given graph 
// step 2: create a color array and initialize it with value -1
// step 3: traverse the array and if a node having color value -1 is found call dfs function for it and give it the color 0
// step 4: traverse the graph for its adjacent nodes of the currnode and if you find a node having color -1 call dfs for it and assign it a opposite color of the currnode 
// step 5:  else if the color of ajdNdoe is not -1 check whether it has the same color  as the currnode and if it has the same color as currnode return false because graoh cannot be bipartite

