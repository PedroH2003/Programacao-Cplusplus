#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 2e5+10;
vector<vector<pair<int,int>>> g(MAX);
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
            int w = d + u.second;
            if(dist[u.first] > w){
                q.push({-w, u.first});
            }
        }


    }
}

int main(){

    int n,m,a; cin >> n >> m >> a;
    for(int i=0; i<m; i++){
        int x,y,w; cin >> x >> y >> w; x--,y--;

        g[x].push_back({y, w});
        g[y].push_back({x, w});
    }
    
    vector<pair<int,int>> amigos(a);
    dijkstra(0);
    for(int i=0; i<a; i++){
        int num; cin >> num; num--;
        amigos[i] = {num, dist[num]};
    }
    dijkstra(n-1);
    int ans = INF;
    for(int i=0; i<a; i++){
        int aux = amigos[i].second + dist[amigos[i].first];
        ans = min(ans, aux);
    }
    cout << ans << endl;


    return 0;
}