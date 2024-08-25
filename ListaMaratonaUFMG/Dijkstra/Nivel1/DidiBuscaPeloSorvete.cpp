#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5+10;
const int INF = 0x3f3f3f3f;
vector<vector<pair<int,int>>> g(MAX);
vector<int> amigo;
int dist[MAX];

void dijkstra(int s){
    memset(dist, INF, sizeof dist);
    priority_queue<pair<int,int>> q; q.push({0, s});
    dist[s] = 0;

    while(!q.empty()){
        int v = q.top().second;
        int d = -q.top().first;
        q.pop();

        if(d > dist[v]) continue;
        dist[v] = d;
        for(auto u: g[v]){
            int w = u.first + d;
            if(dist[u.second] > w){
                q.push({-w, u.second});
            }
        }
    }
}



int main(){

    int n,m,x; cin >> n >> m >> x;
    for(int i=0; i<m; i++){
        int a,b,c; cin >> a >> b >> c; a--,b--;

        g[a].push_back({c, b});
        g[b].push_back({c, a});
    }
    for(int i=0; i<x; i++){
        int a; cin >> a; a--;
        amigo.push_back(a);
    }

    vector<int> aux;
    int ans = INF;
    dijkstra(0);
    for(int i=0; i<x; i++){
        aux.push_back(dist[amigo[i]]);
    };
    dijkstra(n-1);
    for(int i=0; i<x; i++){
        int sum = dist[amigo[i]] + aux[i];
        ans = min(ans, sum);
    }
    cout << ans << endl;

    return 0;
}