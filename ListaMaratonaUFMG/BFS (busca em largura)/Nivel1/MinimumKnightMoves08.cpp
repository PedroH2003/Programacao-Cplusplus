#include <bits/stdc++.h>

using namespace std;

pair<int,int> fim;
int vis[8][8];
int dist[8][8];
vector<pair<int,int>> mov = {{-2, -1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {1, -2}, {-1, 2}, {1, 2}};

bool val(pair<int,int> u){
    return u.first >= 0 and u.second >= 0 and u.first < 8 and u.second < 8 and !vis[u.first][u.second];
}

int bfs(pair<int,int> s){
    memset(vis, 0, sizeof vis);
    
    queue<pair<int,int>> q; q.push(s);
    vis[s.first][s.second] = 1;
    dist[s.first][s.second] = 0;

    while(!q.empty()){
        pair<int,int> v = q.front(); q.pop();

        if(v == fim) return dist[v.first][v.second];

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

int main(){

    int t; cin >> t;

    while(t--){
        string i,f; cin >> i >> f;
        pair<int, int> ini = {i[0] - 'a', (i[1] - '0') - 1};
        fim = {f[0] - 'a', (f[1] - '0') - 1};

        int ans = bfs(ini);
        cout << ans << endl;
    }

    return 0;
}