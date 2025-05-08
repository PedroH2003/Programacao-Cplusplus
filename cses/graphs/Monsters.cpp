#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e3+10, INF = 0x3f3f3f3f;
int n,m;
pair<int,int> ini;
pair<int,int> dest = {-1, -1};
vector<pair<int,int>> mons;
char M[MAX][MAX];
int vis[MAX][MAX];
int dist[MAX][MAX];
pair<int,int> pai[MAX][MAX];
char caminhos[MAX][MAX];
vector<pair<int,int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int,int> u){
    return u.first >= 0 and u.second >= 0 and u.first < n and u.second < m and !vis[u.first][u.second] and M[u.first][u.second] != '#';
}

void bfs_ms(vector<pair<int,int>> s){
    memset(dist, INF, sizeof dist);
    queue<pair<int,int>> q;
    for(int i=0; i<s.size(); i++){
        pair<int,int> a = s[i];
        vis[a.first][a.second] = 1;
        dist[a.first][a.second] = 0;
        q.push(a);
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

void bfs(pair<int,int> s){
    memset(vis, 0, sizeof vis);
    queue<pair<int,int>> q; q.push(s);
    vis[s.first][s.second] = 1; dist[s.first][s.second] = 0;

    pai[s.first][s.second] = s;

    while(!q.empty()){
        pair<int,int> v = q.front(); q.pop();

        if(v.first == 0 or v.first == n-1 or v.second == 0 or v.second == m-1){
            if(dist[v.first][v.second] <= (n * m)){
                dest = v;
            }
        }

        for(int i=0; i<mov.size(); i++){
            pair<int,int> u = mov[i];
            u.first += v.first; u.second += v.second;
            if(val(u) and dist[v.first][v.second] + 1 < dist[u.first][u.second]){
                vis[u.first][u.second] = 1;
                dist[u.first][u.second] = dist[v.first][v.second] + 1;
                pai[u.first][u.second] = v;
                if(i == 0){
                    caminhos[u.first][u.second] = 'U';
                }else if(i == 1){
                    caminhos[u.first][u.second] = 'D';
                }else if(i == 2){
                    caminhos[u.first][u.second] = 'L';
                }else{
                    caminhos[u.first][u.second] = 'R';
                }

                q.push(u);           
            }
        }
    }
}

vector<char> path(pair<int,int> v){
    vector<char> ans;
    if(v.first != -1){
        while(pai[v.first][v.second] != v){
            char aux = caminhos[v.first][v.second];
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
            else if(M[i][j] == 'M') mons.push_back({i, j}); 
        }
    }
    bfs_ms(mons);
    bfs(ini);
    vector<char> ans = path(dest);

    if(dest.first == -1) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        cout << ans.size() << endl;
        if(ans.size() != 0){
        for(auto u: ans) cout << u;
        cout << endl;
        }
    }

    return 0;
}