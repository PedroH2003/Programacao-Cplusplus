#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 260;
int n,m,c,k;
vector<vector<pair<int,int>>> g(MAX);
int dist[MAX];

void dijkstra(int s){
    memset(dist, INF, sizeof dist);
    priority_queue<pair<int,int>> q; q.push({0, s});
    dist[s] = 0;

    while(!q.empty()){
        int v = q.top().second; int d = -q.top().first; q.pop();

        if(d > dist[v]) continue;
    
        for(auto u: g[v]){
            int w = d + u.second;

            if(v < c-1){
                if(u.first == v+1){
                    if(dist[u.first] > w){
                        dist[u.first] = w;
                        q.push({-w, u.first});
                    }
                }
            }
            else{
                if(dist[u.first] > w){
                    dist[u.first] = w;
                    q.push({-w, u.first});
                }                
            }
        }
    }
}

int main(){

    while(cin >> n >> m >> c >> k and n){
        for(int i=0; i<m; i++){
            int a,b,c; cin >> a >> b >> c;
            g[a].push_back({b, c});
            g[b].push_back({a, c});
        }
        dijkstra(k);
        cout << dist[c-1] << endl;
        g.clear(); g.resize(MAX);
    }

    return 0;
}