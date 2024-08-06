#include <bits/stdc++.h>

using namespace std;

int n,m,c,k; 
const int MAX = 260;
const long long INF = 0x3f3f3f3f3f3f3f3f;
vector<vector<pair<int,long long>>> g(MAX);
bool vis[MAX];
// vector<int> dist(MAX);
// vector<int> servicos;


int nova_rota(int v, long long d){
    for(int i=v+1; i<c; i++){
        for(auto u: g[i-1]){
            if(u.first == i){
                d += u.second;
                break;
            }
        }
    }
    return d;
}

int dij(int s){
    memset(vis, 0, sizeof vis);
    // memset(dist, INF, sizeof dist);
    priority_queue<pair<long long,int>> q;
    q.push({0, s}); // dist[s] = 0;
    long long rota_servico = INF;

    while(!q.empty()){
        int v = q.top().second;
        long long d = -(q.top().first);
        q.pop();

        if(v == c-1){
            long long ans = min(d, rota_servico);
            return ans;
        }

        if(v < c){
            rota_servico = nova_rota(v, d);
            continue;
        }

        if(vis[v]) continue;
        vis[v] = 1;

        for(auto u: g[v]){
            long long w = -(d + u.second);
            q.push({w, u.first});
        }
    }

}

int main(){

    while(cin >> n >> m >> c >> k and n != 0){
        for(int i=0; i<m; i++){
            int x,y,w; cin >> x >> y >> w;
            g[x].push_back({y,w});
            g[y].push_back({x,w});
        }
        // for(int i=0; i<c; i++) servicos.push_back(i);
        long long ans = dij(k);
        cout << ans << endl;

        //servicos.clear();
        g.clear();
        g.resize(MAX);
    }

    return 0;
}