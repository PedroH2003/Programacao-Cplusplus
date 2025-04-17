#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 2e5+10;

int n,m,x;
vector<vector<pair<int,int>>> g(MAX);
int dist[MAX];
vector<pair<int,int>> amigos;

void dijkstra(int s){
    memset(dist, INF, sizeof dist);
    priority_queue<pair<int,int>> q; q.push({0, s});

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

    cin >> n >> m >> x;
    for(int i=0; i<m; i++){
        int a,b,c; cin >> a >> b >> c; a--,b--;
        g[a].push_back({b,c});
        g[b].push_back({a,c});
    }
    dijkstra(0);
    for(int i=0; i<x; i++){
        int num; cin >> num; num--;
        amigos.push_back({num, dist[num]});
    }
    dijkstra(n-1);

    int menor = INF;
    for(int i=0; i<x; i++){
        int aux = dist[amigos[i].first] + amigos[i].second;
        menor = min(menor, aux);
    }
    cout << menor << endl;

    return 0;
}