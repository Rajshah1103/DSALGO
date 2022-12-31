#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
        bool check(int start,vector<int> adj[],int color[]){
            queue<int> q;
            q.push(start);
            color[start] =0;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                for(auto it : adj[node]){
                    // if adjacet node is yet to be coloured 
                    // you will give the opposite color
                    if(color[it]==-1){
                        color[it] = !color[node];
                        q.push(it);
                    }
                    // is the adjacent node having the same color 
                    // someone did color it on the same path then return false 
                    else if(color[it]==color[node]){
                            return false;
                    }
                }
            }
            return true;
        }


        bool isBipartite(int V,vector<int> adj[]){
             int color[V];
             for(int i=0;i<V;i++){
                color[i]=-1;
            }
            for(int i=0;i<V;i++){
                if(color[i]==-1){
                    if(check(i,adj,color)==false){
                        return false;
                    }
                }
            }
            return  true;
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


// the intution or the process fir bipartite using BFS 
// step 1: create a adjList or adjMatrix of the graph
// step 2: create a color array and intialize it with the color -1
// step 3: iterate over the adjList or matrix and if a node has color -1 do bfs traversal of that node and set it color to 1 and push it in the queue and iterate over the other adjNodes of the currnode and u find another node having color -1 asign it the opposite color of the currnode and push it inside the queue 
// sttep 4: if the node is already visited check if the node and currnode both have same color if both have same color return false cause it is not a bipartite graph

// 4 4     
// 1 3
// 0 2
// 1 3
// 0 2
// YES

// 5 5
// 1 2
// 1 3
// 1 4
// 1 5
// 2 3
// NO
