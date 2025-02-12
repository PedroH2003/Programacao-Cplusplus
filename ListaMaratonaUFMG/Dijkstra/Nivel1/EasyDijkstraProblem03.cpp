#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 1e4+10;
vector<vector<pair<int,int>>> g(MAX);
int dist[MAX];

void dijkstra(int a){
    memset(dist, INF, sizeof dist);
    priority_queue<pair<int,int>> q; q.push({0, a});

    while(!q.empty()){
        int v = q.top().second; int d = -q.top().first; 
        q.pop();

        if(d > dist[v]) continue;
        dist[v] = d;

        for(pair<int,int> u: g[v]){
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
        int a,b; cin >> a >> b; a--,b--;
        dijkstra(a);
        if(dist[b] != INF) cout << dist[b] << endl;
        else cout << "NO" << endl;

        g.clear();
        g.resize(MAX);
    }


    return 0;
}