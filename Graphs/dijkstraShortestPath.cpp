#include<iostream>
#include<unordered_map>
#include<set>
#include<vector>
#include<list>
// #include<pair>
using namespace std;

template<class T>
class graph{
    unordered_map<T,list<pair<int,int> > >adj;
    // vector<pair<int, pair<int,int> > >adj;
    public:
        void addEdge(T u, T v,int dist,bool bidir = false){
            adj[u].push_back(make_pair(v,dist));
            if(bidir){
                adj[v].push_back(make_pair(u,dist));
            }
        }
        void printAdj(){
            // let try to print adjList
            // iterate over all the key value pair in the map 
            for(auto j: adj){
                cout<<j.first<<"->";
                // iterate over the list of cities
                for(auto l: j.second){
                    cout<<"("<<l.first<<","<<l.second<<")";
                }
                cout<<endl;
            }
        }
        void dijkstraSP(T src){
                unordered_map<T,int> dist;
                // vector<pair<int,bool> > dist;
                // set all distance to infinity
                for(auto i : adj){
                    dist[i.first] = 10000;
                }
                // set to find out the node with minimum dist
                set<pair<int, T> >s;
                dist[src] = 0;
                s.insert(make_pair(0,src));
                while(!s.empty()){
                    // find the pair at the front
                    auto p = *(s.begin());
                    T node = p.second;

                    int nodeDist = p.first;
                    s.erase(s.begin());

                    // iterate over the neighbours of correcet node
                    for(auto childpair : adj[node]){
                        if(nodeDist + childpair.second < dist[childpair.first]){
                            // in the set updation is not possible or in priority queue
                            // so we have to remove the old pair and insert the new one to simulate updation
                            T dest = childpair.first;
                            auto f  =s.find(make_pair(dist[dest],dest));
                            if(f!=s.end()){
                                s.erase(f);
                            }
                            // insert the new pair
                            dist[dest] = nodeDist + childpair.second;
                            s.insert(make_pair(dist[dest],dest));
                        }
                    }
                }
                // lets print all other node dist
                for(auto d: dist){
                    cout<<d.first<<" is loacted at distance of "<<d.second<<endl;
                }
        }

};

int main(){
    graph<int> g;
    g.addEdge(0,1,5);
    g.addEdge(0,2,8);
    g.addEdge(1,0,5);
    g.addEdge(1,2,9);
    g.addEdge(1,3,2);
    g.addEdge(2,0,8);
    g.addEdge(2,1,9);
    g.addEdge(2,3,6);
    g.addEdge(3,1,2);
    g.addEdge(3,2,6);
    g.printAdj();
    g.dijkstraSP(0);


return 0;
}