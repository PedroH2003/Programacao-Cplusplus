#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

const int INF = 0x3f3f3f3f;
const int MAX = 1e4+10;

int n,m,ini,fim;
vector<vector<pair<int,int>>> g(MAX);
int dist[MAX];

void dijkstra(int s){
    memset(dist, INF, sizeof dist);
    priority_queue<pair<int,int>> q; q.push({0, s});

    while(!q.empty()){
        int v = q.top().second; int d = -q.top().first;
        q.pop();

        if(d > dist[v]) continue;
        dist[v] = d;

        for(auto u: g[v]){
            int w = u.second + d;
            if(dist[u.first] > w){
                q.push({-w, u.first});
            }
        }
    }
}

int main(){

    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=0; i<m; i++){
            int a,b,c; cin >> a >> b >> c; a--,b--;

            g[a].push_back({b,c});
        }
        cin >> ini >> fim; ini--, fim--;
        dijkstra(ini); 
        int ans = dist[fim];
        if(ans != INF) cout << ans << endl;
        else cout << "NO" << endl;

        g.clear();
        g.resize(MAX);
    }

    return 0;
}