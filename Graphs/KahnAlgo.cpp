#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
        vector<int> toposort(int V,vector<int>adj[]){
                int indegree[V] ={0};
                for(int i=0;i<V;i++){
                    for(auto it: adj[i]){
                        indegree[it]++;
                    }
                }
                queue<int> q;
                for(int i=0;i<V;i++){
                    if(indegree[i]==0){
                        q.push(i);
                    }
                }
                vector<int> topo;
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                // node in your toposort 
                // so pls remove it from the indegree
                    topo.push_back(node);
                for(auto it : adj[node]){
                        indegree[it]--;
                        if(indegree[it]==0){
                            q.push(it);
                        }
                }
            }
            return topo;
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
    }
    solution obj;
    vector<int> ans = obj.toposort(V,adj);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

return 0;
}
//   the intution or the process of KAHN's ALgo
// step 1; create the adjacency list for the graph;
// step 2: create an array which stores the indegree of the nodes 
// step 3: create a queue to store the nodes having indegree 0
// step 4: create a vector to store the values which are being popped out of the queue
// step 5: perform bfs on the node in the inedgree list having the indegree 0 and push it into the queue
// step 6: repeat the bfs till the  queue is not empty and if you find any node from the indegree array having value 0 push it inside the queue
// Important point : kahns algo can only be applied if there is atleast one node with the indegree 0 and in topo sort questions there is alays one node with the indegreee zero