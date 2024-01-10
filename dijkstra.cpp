#include <iostream>
#include <vector>

using namespace std;

struct Edge {
    int to, w;
};

vector<vector<Edge> > g;
vector <int> used;
vector <int> dist;
vector <int> parent;

void dijkstra(int start)
{
    dist[start] = 0;
    for(int i = 0; i < dist.size(); i++){
        int best = -1;
        for(int j = 0; j < dist.size(); j++){
            if(!used[j] && (best == -1 || dist[j] < dist[best])){
                best = j;
            }
        }
        used[best] = 1;
        for(auto edge : g[best]){
            if(dist[edge.to] > dist[best]+edge.w){
                dist[edge.to] = dist[best]+edge.w;
                parent[edge.to] = best;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    g.resize(n);
    used.resize(n, 0);
    dist.resize(n, 1000000);
    parent.resize(n, -1);
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    return 0;
}
