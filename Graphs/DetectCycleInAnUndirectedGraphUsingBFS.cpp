#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{
    private: 
        bool detect(int src,vector<int>adj[],int vis[]){
            vis[src] =1;
            queue<pair<int,int>>q;
            q.push({src,-1});
            while(!q.empty()){
                int node = q.front().first;
                int parent =q.front().second;
                q.pop();
                for(auto adjNode : adj[node]){
                    if(!vis[adjNode]){
                        vis[adjNode] = 1;
                        q.push({adjNode,node});
                    }
                    else if(parent !=adjNode){
                        return true;
                    }
                }
            }
            return false;
        }
    public:
        bool isCycle(int V,vector<int> adj[]){
                int vis[V] = {0};
                for(int i=0;i<V;i++){
                    if(!vis[i]){
                        if(detect(i,adj,vis)){
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

// the intution or the process to find or detect  a cycle in a undirected graph
// step 1: create a adj list of the graph
// step 2: create a array of vis to store whether the node is already visited or not
// step 3: perform bfs on the node from the graph having vis 0
// step 4: create a queue of pairs to store the src or the current node and the parent of the node
// step 5:  push the value into the queue and traverse the adjnodes of the src or currnode 
// step 6: till the queue is not empty pop the elements of the queue the first popped elemnet is the node and the second popped is the parent of the node,since we store the value in pair of currnode and parent where parent means the node through which we found the current node in the bfs
// if the adjnodes of the current node is not visited push it in the queue with the adjnode and its parent i.e. currentnode
// now check if the node is visited does the visited has the same parent if not then the node has been visited by some other node which means there is a cycle and return true else return false