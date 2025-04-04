#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e4+10;
int n,m;
char M[MAX][MAX];
int vis[MAX][MAX];
vector<pair<int,int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int,int> u){
    return u.first >= 0 and u.second >= 0 and u.first < n and u.second < m and !vis[u.first][u.second]
    and M[u.first][u.second] == '.';
}

void bfs(pair<int,int> s){
    queue<pair<int,int>> q; q.push(s);
    vis[s.first][s.second] = 1;

    while(!q.empty()){
        pair<int,int> v = q.front(); q.pop();

        for(auto u: mov){
            u.first += v.first; u.second += v.second;
            if(val(u)){
                q.push(u);
                vis[u.first][u.second] = 1;
            }
        }
    }
}

int main(){

    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> M[i][j];
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(!vis[i][j] and M[i][j] == '.'){
                bfs({i,j});
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}