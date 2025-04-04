#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 1e4+10;

int n,m;
pair<int,int> ini,fim;
char M[MAX][MAX];
int vis[MAX][MAX];
char caminho[MAX][MAX];
pair<int,int> pai[MAX][MAX];
vector<pair<int,int>> mov = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

bool val(pair<int,int> u){
    return u.first >= 0 and u.second >= 0 and u.first < n and u.second < m
    and !vis[u.first][u.second] and M[u.first][u.second] != '#';
}

void bfs(pair<int,int> s){
    queue<pair<int,int>> q; q.push(s);
    vis[s.first][s.second] = 1;
    
    while(!q.empty()){
        pair<int,int> v = q.front(); q.pop();

        for(int i=0; i<mov.size(); i++){
            char dir;
            if(i == 0) dir = 'L';
            else if(i == 1) dir = 'R';
            else if(i == 2) dir = 'U';
            else dir = 'D';

            pair<int,int> u = mov[i]; 
            u.first += v.first; u.second += v.second;

            if(val(u)){
                vis[u.first][u.second] = 1;
                q.push(u);
                caminho[u.first][u.second] = dir;
                pai[u.first][u.second] = v;
            }
        }
    }
}

vector<char> path(pair<int,int> v){
    vector<char> ans;
    if(vis[v.first][v.second]){
        char aux;
        while(v != ini){
            aux = caminho[v.first][v.second];
            ans.push_back(aux);
            v = pai[v.first][v.second];
        }
        reverse(ans.begin(), ans.end());
    }
    return ans;
}

int main(){

    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> M[i][j];
            if(M[i][j] == 'A') ini = {i, j};
            if(M[i][j] == 'B') fim = {i, j};
        }
    }
    bfs(ini);
    vector<char> ans = path(fim);
    if(ans.size() == 0) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        cout << ans.size() << endl;
        for(auto u: ans) cout << u;
        cout << endl;
    }

    return 0;
}