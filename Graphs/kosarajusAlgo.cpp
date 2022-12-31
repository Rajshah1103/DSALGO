#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:

            void DFS(int node,vector<int>&vis,vector<int> adj[],stack<int>&st){
                vis[node] = 1;
                for(auto it : adj[node]){
                    if(!vis[it]){
                        DFS(it,vis,adj,st);
                    }
                }
                st.push(node);
            }
            void dfs(int node,vector<int>&vis,vector<int>adjT[]){
                vis[node] = 1;
                cout<<node<<" ";
                for(auto it : adjT[node]){
                    if(!vis[it]){
                        dfs(it,vis,adjT);
                    }
                }
            }


            int kosaraju(int V,vector<int>adj[]){
                vector<int> vis(V,0);
                stack<int>st;
                for(int i=0;i<V;i++){
                    if(!vis[i]){
                        DFS(i,vis,adj,st);
                    }
                }
                vector<int>adjT[V];
                for(int i=0;i<V;i++){
                    vis[i]=0;
                    for(auto it: adj[i]){
                        // this says there is an edge between i and it i.e. i->it
                        // so after reversing the edge should be from it to i i.e. it->i;
                        adjT[it].push_back(i);
                    }
                }
                int scc = 0;
                while(!st.empty()){
                    int curr = st.top();
                    st.pop();
                    if(!vis[curr]){
                        scc++;
                        dfs(curr,vis,adjT);
                        cout<<endl;
                    }
                }
            return scc;
        }

        
};

int main(){
    int V,E;
    cin>>V>>E;
    vector<int>adj[V];
    int x,y;
    for(int i=0;i<V;i++){
    cin>>x>>y;
    adj[x].push_back(y);
    }
    solution obj;
    int ans = obj.kosaraju(V,adj);

return 0;
}


// the intution or the process for kosaraju
// step 1: create adjList of the graph
// step 2: create a stack to store the visited node aaccording to there end time 
// create a vis arr to store which node has been visited for dfs
// Part 1: do the dfs on the graph and store the node whose dfs has been finished in the stack 
// Part 2: create another vector named adjT to reverse the graph and store it reversing in the sense if the edge is from i->it then 
// we have to reverse it to it->i,the code for it is below
// for(int i=0;i<v:i++){
    // for(auto it: adj[i]){
        // vis[i] = 0
        // adjT[it].push_back(i);
    // }
// }
// this will reverse/transpose the graph and now you have to perform dfs on the again,since we have reversed the graph we have to change the vis array back to 0,cause we have to us the array for the dfs
// the dfs function will be different from the perivous one here we will not pass the stack asn parameter
// depending on the question we will use the dfs if it asks the count then we have to just declare a int SCC and till the queue is not empty we will pop the elements and if the popped element is not visited we will call the dfs and increase the SCC by 1;
// if we want to print the SCC the node which we pass in the parameter we will cout it the second dfs function 
