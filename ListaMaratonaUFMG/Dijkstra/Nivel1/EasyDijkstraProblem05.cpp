#include<bits/stdc++.h>
 
using namespace std;
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define REP(i, a, b) for(int i=a ; i<b; i++)
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int mod = 1e9+7;
const int MAX = 1e4+10;

// EXERCICIO DE DIJKSTRA ABAIXO (ENCONTRAR MENOR DE CAMINHO DE 1 A N):

int n,m,a,b;
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
int main() { _
    int t; cin >> t;

    while(t--){
        cin >> n >> m;
        for(int i=0; i<m; i++){
            int x,y,z; cin >> x >> y >> z; x--,y--;
            g[x].push_back({y, z});
        }
        cin >> a >> b; a--, b--;
        dijkstra(a);
        if(dist[b] != INF) cout << dist[b] << endl;
        else cout << "NO" << endl;
        g.clear();
        g.resize(MAX);
    }
    return 0;
}