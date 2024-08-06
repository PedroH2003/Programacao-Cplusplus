// ESTA DANDO TIME LIMIT

#include <bits/stdc++.h>

using namespace std;

const int MAX = 1010;
const int INF = 0x3f3f3f3f;
vector<vector<pair<int,int>>> g(MAX);
int dist[MAX];
vector<int> hosp;


int dij(int maior){
    memset(dist, INF, sizeof dist);
    priority_queue<pair<int,int>> q;

    for(auto u: hosp){
        dist[u] = 0;
        q.push({0, u});
    }

    while(!q.empty()){
        int v = q.top().second;
        int d = -(q.top().first);
        q.pop();

        if(d > dist[v]) continue;
        maior = max(maior, dist[v]);

        for(auto u: g[v]){
            int w = d + u.second;
            if(dist[u.first] > w){
                dist[u.first] = w;
                q.push({-w, u.first});
            }
        }
    }

    return maior;
}

int main(){

    int n,m,q;
    while(cin >> n >> m >> q){
        for(int i=0; i<m; i++){
            int a,b,w; cin >> a >> b >> w;
            a--,b--;

            g[a].push_back({b,w});
            g[b].push_back({a,w});
        }

        for(int i=0; i<q; i++){
            int x; cin >> x;
            x--;

            hosp.push_back(x);
        }

        int ans = dij(-1);
        cout << ans << endl;

        g.clear();
        g.resize(MAX);
        hosp.clear();
    }


    return 0;
}