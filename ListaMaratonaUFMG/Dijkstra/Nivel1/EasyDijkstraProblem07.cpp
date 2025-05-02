#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e4+10, INF = 0x3f3f3f3f;
int ini,fim;
vector<vector<pair<int,int>>> g(MAX);
int dist[MAX];

void dijkstra(){
    memset(dist, INF, sizeof dist);
    priority_queue<pair<int,int>> q; q.push({0, ini});

    while(!q.empty()){
        int v = q.top().second; int d = -q.top().first; q.pop();

        if(d > dist[v]) continue;
        dist[v] = d;

        for(auto u: g[v]){
            int w = d + u.second;
            if(dist[u.first] > w){
                q.push({-w, u.first});
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        for(int i=0; i<m; i++){
            int a,b,c; cin >> a >> b >> c; a--,b--;
            g[a].push_back({b, c});
        }
        cin >> ini >> fim; ini--, fim--;
        dijkstra();
        if(dist[fim] == INF) cout << "NO" << endl;
        else cout << dist[fim] << endl;

        g.clear(); g.resize(MAX);
    }


    return 0;
}