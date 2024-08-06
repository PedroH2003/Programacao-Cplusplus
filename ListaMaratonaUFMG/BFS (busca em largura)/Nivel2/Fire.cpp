#include <bits/stdc++.h>

using namespace std;

int n,m;
const int MAX = 1010;
const int INF = 0x3f3f3f3f;
char M[MAX][MAX];
bool vis[MAX][MAX];
int dist[MAX][MAX];
vector<pair<int,int>> mov = {{-1,0}, {1,0}, {0,-1}, {0,1}};


bool val(pair<int,int> u){
    return u.first >= 0 and u.second >= 0 and u.first < n and u.second < m 
    and !vis[u.first][u.second] and M[u.first][u.second] != '#';
}

void bfs_ms(vector<pair<int,int>> ms){
    memset(vis, 0, sizeof vis);
    memset(dist, INF, sizeof dist);

    queue<pair<int,int>> q;
    for(auto u: ms){
        q.push(u);
        vis[u.first][u.second] = 1;
        dist[u.first][u.second] = 0;
    } 

    while(!q.empty()){
        pair<int,int> v = q.front(); q.pop();
        for(auto u: mov){
            u.first += v.first; u.second += v.second;
            if(val(u)){
                vis[u.first][u.second] = 1;
                dist[u.first][u.second] = dist[v.first][v.second] + 1;
                q.push(u);
            }
        }
    }
}

int bfs(pair<int,int> s){
    memset(vis, 0, sizeof vis);
    queue<pair<int,int>> q; q.push(s);
    vis[s.first][s.second] = 1;
    dist[s.first][s.second] = 0;

    while(!q.empty()){
        pair<int,int> v = q.front(); q.pop();
        if(v.first == 0 or v.first == n-1 or v.second == 0 or v.second == m-1) return dist[v.first][v.second]+1;

        for(auto u: mov){
            u.first += v.first; u.second += v.second;
            if(val(u) and dist[v.first][v.second]+1 < dist[u.first][u.second]){
                vis[u.first][u.second] = 1;
                dist[u.first][u.second] = dist[v.first][v.second] + 1;
                q.push(u);                
            }
        }
    }

    return -1;
}

int main(){

    int t; cin >> t;
    while(t--){
        cin >> m >> n;
        vector<pair<int,int>> ms;
        pair<int,int> s;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> M[i][j];
                if(M[i][j] == '*') ms.push_back({i,j});
                if(M[i][j] == '@') s = {i,j};
            }
        }

        bfs_ms(ms);
        int ans = bfs(s);
        if(ans != -1) cout << ans << endl;
        else cout << "IMPOSSIBLE" << endl;

    }

    return 0;
}