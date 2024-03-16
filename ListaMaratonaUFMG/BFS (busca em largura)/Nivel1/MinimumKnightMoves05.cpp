#include <bits/stdc++.h>

using namespace std;

pair<int, int> fim;
bool vis[8][8];
int dist[8][8];
vector<pair<int,int>> mov = {{-2, -1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {1, -2}, {-1, 2}, {1, 2}};

bool val(pair<int,int> u){
    return u.first >= 0 and u.second >= 0 and u.first < 8 and u.second < 8
    and !vis[u.first][u.second];
}

int bfs(pair<int,int> ini){
    memset(vis, 0, sizeof vis);
    queue<pair<int,int>> q; q.push(ini);
    vis[ini.first][ini.second] = 1;
    dist[ini.first][ini.second] = 0;

    while(!q.empty()){
        pair<int,int> v = q.front(); q.pop();

        if(v.first == fim.first and v.second == fim.second){
            return dist[fim.first][fim.second];
        }

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
        string i, f; cin >> i >> f;
        pair<int, int> ini = {i[0]-'a', (i[1]-'0')-1};
        fim = {f[0]-'a', (f[1]-'0')-1};

        int ans = bfs(ini);
        cout << ans << endl;
    }

    return 0;
}