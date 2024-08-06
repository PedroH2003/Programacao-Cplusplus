#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 10010;
vector<vector<pair<int,int>>> g(MAX);
int dist[MAX];

int dij(int a, int b){
    memset(dist, INF, sizeof dist);
    priority_queue<pair<int,int>> q;
    q.push({0,a});
    dist[a] = 0;

    while(!q.empty()){
        int v = q.top().second;
        int w = -(q.top().first);
        q.pop();

        if(w > dist[v]) continue;
        dist[v] = w;
        if(v == b) return dist[v];

        for(auto u: g[v]){
            int d = w + u.second;

            if(dist[u.first] > d){
                q.push({-d, u.first});
            }
        }
    }

    return -1;
    

}

int main(){

    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        for(int i=0; i<m; i++){
            int x,y,w; cin >> x >> y >> w;
            x--, y--;

            g[x].push_back({y,w});
            //g[y].push_back({x,w});
        }
        int a,b; cin >> a >> b; a--, b--;
        int ans = dij(a,b);

        if(ans != -1) cout << ans << endl;
        else cout << "NO" << endl;

        g.clear();
        g.resize(MAX);
        
    }

    return 0;
}