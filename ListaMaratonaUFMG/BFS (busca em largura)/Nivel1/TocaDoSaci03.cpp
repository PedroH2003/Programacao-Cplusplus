#include <bits/stdc++.h>

using namespace std;

int n, m;
int const MAX = 1e3+10;
int M[MAX][MAX];
bool vis[MAX][MAX];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int, int> u){
    return u.first >= 0 and u.second >= 0 and u.first < n and u.second < m and !vis[u.first][u.second] and
    (M[u.first][u.second] == 1 or M[u.first][u.second] == 2);
}

int bfs(pair<int, int> s){
    int ans=1;
    queue<pair<int, int>> q;
    q.push(s);
    vis[s.first][s.second] = 1;

    while(!q.empty()){
        pair<int, int> v = q.front(); q.pop();

        if(M[v.first][v.second] == 2){
            break;
        }
        
        for(auto u: mov){
            u.first += v.first; u.second += v.second;

            if(val(u)){
                q.push(u); vis[u.first][u.second] = 1;
                ans++;
            }
        }


    }

    return ans;
}

int main(){

    cin >> n >> m;

    pair<int, int> s;
    for(int i=0; i<n; i++) for(int j=0; j<m; j++){
        cin >> M[i][j];
        if(M[i][j] == 3) s = {i, j};
    }

    int ans = bfs(s);
    cout << ans;

    return 0;
}