#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e3+10;

int n,m;
pair<int,int> fim;
int M[MAX][MAX];
int vis[MAX][MAX];
int dist[MAX][MAX];
vector<pair<int,int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int,int> u){
    return u.first >= 0 and u.second >= 0 and u.first < n and u.second < m and !vis[u.first][u.second] and M[u.first][u.second] != 0;
}

int bfs(pair<int,int> s){
    queue<pair<int,int>> q; q.push(s);
    vis[s.first][s.second] = 1; dist[s.first][s.second] = 1;

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

    cin >> n >> m;

    pair<int,int> ini;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> M[i][j];
            if(M[i][j] == 3) ini = {i, j};
            if(M[i][j] == 2) fim = {i, j};
        }
    }
    int ans = bfs(ini);
    cout << ans << endl;

    return 0;
}