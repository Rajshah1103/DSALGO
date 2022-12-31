#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// using priority Queue;
class solution{
    public:
        vector<int> dijkstra(int V,vector<vector<int> > adj[],int S){
            priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
            vector<int>dist(V);
            for(int i=0;i<V;i++){
                dist[i] = 1e9;
            }
            dist[S] = 0;
            pq.push({0,S});   // 0 is the cost of the joruney and S is the source of the  journey 
            while(!pq.empty()){
                int dis = pq.top().first;   // here it stores the cost of the journey 
                int node = pq.top().second; //  here it stores the currnode of the graph
                pq.pop();
                for(auto it : adj[node]){
                    int edgeWeight = it[1];   // here it stores the edgeweight i.e. the cost of the journey of the neighbour nodes of node
                    int adjNode = it[0];      //  stores the adjNode of the dist  
                    if(dis+edgeWeight<dist[adjNode]){
                            dist[adjNode] = dis+edgeWeight;
                            pq.push({dist[adjNode],adjNode});
                    }
                }
            }
            return dist;
        }

       
};


int main(){
    int V,E;
    int x,y;
    vector<int>adj[V];
    for(int i=0;i<V;i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }
    solution obj;
            

return 0;
}


// vector<int> adj[V] means array of vectors having the size of 0 to V-1 for each vector like adj[0],adj[1],adj[2] till n-1;
// vector<int> adj(V) means vector of size V like adj={0,1,2,3,...} till V-1;


// the intution or the porcess/steps for dijkstra algo using priorityQueue
//step 1: create an adjList of the given graph
// step 2: create an array to store the dist or the weight to travel to that node named record
//step 3: create a minheap priortiy queue i.e. the syntax of minheap is: priority_queue<pair<int,int>vector<pair<int,int>greater<pair<int,int>>> pq
//step 4: push the source node and its cost into the queue in the order cost is first and node second ex: pq.push({0,src}) where 0 is the cost and src is the node
//step 5: now till the pq is not empty 
// pop out the pair from the queue in the order:
// int dis = pq.first  which will give you the cost of the i.e. weight of the of the graph
// int node =pq.second which will give you the node for which the cost 
// traverse the adjnode of the node through the adjlist and strore the edgeWeight and the adjnode of the currentnode
// int edgeWeight = it[1] and int node = it[0];
// step 6: now check whether the dis+edgeWeight is less than the record[node]
// if it is less than change the value to record[node] = dis+edgeWeight;
// and push the record[node] and the node into the pq 
// do this till the queue is not empty and when this is over 
// return the record since it has the value for shortest path 