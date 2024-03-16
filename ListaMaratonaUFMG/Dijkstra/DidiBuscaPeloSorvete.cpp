//LIMITE DE TEMPO EXCEDIDO

#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5+10;
vector<vector<pair<int,int>>> g(MAX);
vector<int> amigos(MAX, 0);
vector<bool> vis(MAX);

int dijkstra(int s, int final){
    priority_queue<pair<int,int>> q; q.push({0, s});
    vis[s] = 1;

    while(!q.empty()){
        pair<int, int> v = q.top(); q.pop();

        if(v.second == final and amigos[v.second] == 1){
            return -v.first;
        }
        
        for(auto u: g[v.second]){
            if(!vis[u.second] or amigos[v.second] == 1){
                u.first += (-v.first);
                q.push({-u.first, u.second});
                if(amigos[v.second] == 1){
                    amigos[u.second] = 1;
                }
            }
            vis[u.second] = 1;
        }
    }
}

int main(){

    int n, m, x; cin >> n >> m >> x;

    for(int i=0; i<m; i++){
        int v,j,d; cin >> v >> j >> d; v--; j--;

        g[v].push_back({d, j});
        g[j].push_back({d, v});
    }
    for(int i=0; i<x; i++){
        int num; cin >> num; num--;
        amigos[num] = 1;
    }

    int ans = dijkstra(0, n-1);
    cout << ans << endl;

    return 0;
}