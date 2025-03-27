#include<bits/stdc++.h>
 
using namespace std;
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define REP(i, a, b) for(int i=a ; i<b; i++)
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int mod = 1e9+7;
const int MAX = 2e5+10;

int n,m,x;
vector<vector<pair<int,int>>> g(MAX);
vector<pair<int,int>> amigos;
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

    cin >> n >> m >> x;
    for(int i=0; i<m; i++){
        int a,b,c; cin >> a >> b >> c; a--,b--;
        g[a].push_back({b, c});
        g[b].push_back({a, c});
    }
    dijkstra(0);
    for(int i=0; i<x; i++){
        int num; cin >> num; num--;
        amigos.push_back({num, dist[num]});
    }
    dijkstra(n-1);
    int ans = INF;
    for(int i=0; i<x; i++){
        int sum = amigos[i].second + dist[amigos[i].first];
        ans = min(ans, sum);
    }
    cout << ans << endl;

    return 0;
}