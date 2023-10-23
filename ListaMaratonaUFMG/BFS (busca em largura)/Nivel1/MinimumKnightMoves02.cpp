// https://www.spoj.com/problems/NAKANJ/

#include <bits/stdc++.h>

using namespace std;

pair<int, int> ini;
pair<int, int> fim;
const int MAX = 8;
bool vis[MAX][MAX];
int dist[MAX][MAX];

vector<pair<int, int>> mov = {{-1,-2}, {1,-2}, {-1,2}, {1,2}, {-2,-1}, {-2,1}, {2,-1}, {2,1}};

bool val(pair<int, int> u){
    return u.first >= 0 and u.second >= 0 and u.first < 8 and u.second < 8 and !vis[u.first][u.second];
}

int bfs(pair<int, int> ini){
    memset(vis, 0, sizeof vis);

    queue<pair<int, int>> q; q.push(ini);
    vis[ini.first][ini.second] = 1;
    dist[ini.first][ini.second] = 0;
    int ans=0;

    while(!q.empty()){
        pair<int, int> v = q.front(); q.pop();

        if(v.first == fim.first and v.second == fim.second){
            ans = dist[v.first][v.second];
            break;
        }

        for(auto u: mov){
            u.first += v.first;
            u.second += v.second;

            if(val(u)){
                vis[u.first][u.second] = 1;
                q.push(u);
                dist[u.first][u.second] = dist[v.first][v.second] + 1;
            }
        }
    }

    return ans;

}

int main(){

    int t; cin >> t;

    while(t--){
        string i, f; cin >> i >> f;

        ini = {i[0]-97, (i[1]-'0')-1};
        fim = {f[0]-97, (f[1]-'0')-1};

        int ans = bfs(ini);
        cout << ans << "\n";
    }

    return 0;
}
