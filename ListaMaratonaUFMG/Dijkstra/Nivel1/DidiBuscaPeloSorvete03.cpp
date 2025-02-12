#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 2e5+10;

vector<vector<pair<int,int>>> g(MAX);
int dist[MAX];
vector<int> amigos;

void dijkstra(int s){
    memset(dist, INF, sizeof dist);
    priority_queue<pair<int,int>> q; q.push({0, s});

    while(!q.empty()){
        int v = q.top().second; int d = -q.top().first;

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

void dijkstra_ms(){
    priority_queue<pair<int,int>> q;
    for(int i=0; i<amigos.size(); i++){
        int aux = amigos[i];
        q.push({-dist[aux], aux});
    }
    memset(dist, INF, sizeof dist);

    while(!q.empty()){
        int v = q.top().second; int d = -q.top().first;

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

    int n,m,x; cin >> n >> m >> x;
    for(int i=0; i<m; i++){
        int a,b,c; cin >> a >> b >> c; a--,b--;

        g[a].push_back({b, c});
        g[b].push_back({a, c});
    }
    for(int i=0; i<x; i++){
        int a; cin >> a; a--;
        amigos.push_back(a);
    }
    dijkstra(0);
    dijkstra_ms();
    cout << dist[n-1] << endl;

    return 0;
}