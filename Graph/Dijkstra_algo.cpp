#include<bits/stdc++.h>
using namespace std;


class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int v){
        V = v;
        l = new list<int>[V];
    }
    void addEdge(int x,int y,bool undir = false){
        l[x].push_back(y);
        if(undir){
            l[y].push_back(x);
        }
    }
    int dijkstra(int src,int dest){
        vector<int> dist(V,INT_MAX);
        set<pair<int,int>> s;
        dist[src] = 0;
        s.insert({0,src});
        while(!s.empty()){
            auto it = s.begin();
            int node =  it->second;
            int distTillnow = it->first;
            s.erase(it);
            for(auto nbrPair : l[node]){
                int nbr = nbrPair.second;
                int currEdge = nbrPair.first; 
                if(distTillnow + currEdge < dist[nbr]){
                    auto f = s.find({dist[nbr],nbr});
                    if(f!=s.end()){
                       s.erase(f);
                    }
                    dist[nbr] = distTillnow + currEdge;
                    s.insert(dist[nbr],nbr);
                }
            }
        }
        for(int i=0;i<V;i++){
            cout<<"Node i"<<i<<"Dist"<<dist[i]<<endl;
        }
        return dist[dest];
    }

};


int main(){

   Graph g(5);
   g.addEdge(0,1,1);
   g.addEdge(1,2,1);
   g.addEdge(0,2,4);
   g.addEdge(0,3,7);
   g.addEdge(3,2,2);
   g.addEdge(3,4,3);
   cout<<g.dijkstra(0,4)<<endl;
    return 0;
}