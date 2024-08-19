#include <bits/stdc++.h>

using namespace std;

const int MAX = 210;
const int INF = 0x3f3f3f3f;
int M[MAX][MAX];
int vis[MAX][MAX];
int h,l;
vector<pair<int,int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int,int> u){
    return u.first >= 0 and u.first < h and u.second >= 0 and u.second < l and !vis[u.first][u.second];
}


int bfs(pair<int,int> s){
    queue<pair<int,int>> q; q.push(s);
    vis[s.first][s.second] = 1;
    int qtd=1;

    while(!q.empty()){
        pair<int,int> v = q.front(); q.pop();

        for(auto u: mov){
            u.first += v.first; u.second += v.second;
            if(val(u) and M[u.first][u.second] == M[v.first][v.second]){
                q.push(u);
                vis[u.first][u.second] = 1;
                qtd++;
            }
        }
    }

    return qtd;
}

int main(){

    cin >> h >> l;
    for(int i=0; i<h; i++){
        for(int j=0; j<l; j++){
            cin >> M[i][j];
        }
    }

    int ans=INF;
    for(int i=0; i<h; i++){
        for(int j=0; j<l; j++){
            if(!vis[i][j]){
                int tam = bfs({i,j});
                ans = min(ans, tam);
            }
        }
    }
    cout << ans << endl;

    return 0;
}