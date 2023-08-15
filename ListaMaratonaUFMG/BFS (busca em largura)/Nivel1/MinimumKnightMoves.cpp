// https://www.spoj.com/problems/NAKANJ/

#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> mov = {{-2, -1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {1, -2}, {-1, 2}, {1, 2}};
bool vis[8][8];
int dist[8][8];

bool val(pair<int, int> u){

    return u.first >= 0 and u.second >= 0 and u.first < 8 and u.second < 8 and !vis[u.first][u.second];
}

void bfs(pair<int, int> o, pair<int, int> d){

    queue<pair<int, int>> q; q.push(o);
    dist[o.first][o.second] = 0; vis[o.first][o.second] = 1;

    while(!q.empty()){
        pair<int, int> v = q.front(); q.pop();
        
        if(v.first == d.first and v.second == d.second)
        {
            break;
        }

        for(auto u : mov){
            u.first += v.first; u.second += v.second;

            if(val(u)){
                dist[u.first][u.second] = dist[v.first][v.second] + 1;
                vis[u.first][u.second] = 1;
                q.push(u);
            }
        }
    }

}

int main(){

    int t; cin >> t;

    while(t--){
        string origem, destino; cin >> origem >> destino;
        
        pair<int, int> o = {origem[0]-97, (origem[1]-'0')-1};
        pair<int, int> d = {destino[0]-97, (destino[1]-'0')-1};

        bfs(o, d);
        int ans = dist[d.first][d.second];
        cout << ans << "\n";

        memset(vis, 0, sizeof(vis));
        memset(dist, 0, sizeof(dist));

    }

    return 0;
}