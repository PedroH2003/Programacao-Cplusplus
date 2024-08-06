#include <bits/stdc++.h>

using namespace std;

#define REPI(i, a, b) for(int i=a; i<b; i++)

const int MAX = 1e4+10;
const int INF = 0x3f3f3f3f;
vector<vector<pair<int,int>>> g(MAX);
int dist[MAX];

void dij(int a){
    memset(dist, INF, sizeof dist);
    priority_queue<pair<int,int>> q; q.push({0, a});
    dist[a] = 0;

    while(!q.empty()){
        int v = q.top().second;
        int w = -(q.top().first);
        q.pop();

        if(w > dist[v]) continue;
        dist[v] = w;

        for(auto u: g[v]){
            int d = -(w + u.second);
            
            if(dist[u.first] > d){
                q.push({d, u.first});
            }
        }
    }
}

int main(){

    int t; cin >> t;
    while(t--){
        int v,k; cin >> v >> k;
        REPI(i, 0, k){
            int a,b,w; cin >> a >> b >> w;
            a--, b--;

            g[a].push_back({b,w});
        }
        int a,b; cin >> a >> b; a--, b--;
        dij(a);

        if(dist[b] != INF) cout << dist[b] << endl;
        else cout << "NO" << endl;

        g.clear();
        g.resize(MAX);
    }

    return 0;
}