#include <bits/stdc++.h>

using namespace std;

const int MAX = 1010;
const int INF = 0x3f3f3f3f;
char M[MAX][MAX];
int vis[MAX][MAX];
int dist[MAX][MAX];
pair<int,int> pai[MAX][MAX];
vector<pair<int,int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n,m;
pair<int,int> ini;
string seq="";

bool val(pair<int,int> u){
    return u.first >= 0 and u.first < n and u.second >= 0 and u.second < m 
    and !vis[u.first][u.second] and M[u.first][u.second] != '#';
}

void find_seq(pair<int,int> fim){
    while(fim != ini){
        pair<int,int> aux = pai[fim.first][fim.second];
        if(aux.first != fim.first){
            if(aux.first < fim.first) seq += 'D';
            else seq += 'U';
        }
        else if(aux.second != fim.second){
            if(aux.second < fim.second) seq += 'R';
            else seq += 'L';
        }
        fim = aux;
    }
    reverse(seq.begin(), seq.end());
}

int bfs(pair<int,int> s){
    queue<pair<int,int>> q; q.push(s);
    vis[s.first][s.second] = 1;
    vis[s.first][s.second] = 0;
    pai[s.first][s.second] = s;

    while(!q.empty()){
        pair<int,int> v = q.front(); q.pop();

        if(M[v.first][v.second] == 'B'){
            find_seq(v);
            return dist[v.first][v.second];
        }

        for(auto u: mov){
            u.first += v.first; u.second += v.second;
            if(val(u)){
                vis[u.first][u.second] = 1;
                dist[u.first][u.second] = dist[v.first][v.second] + 1;
                pai[u.first][u.second] = v;
                q.push(u);
            }
        }
    }

    return -1;
}

int main(){

    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> M[i][j];
            if(M[i][j] == 'A') ini = {i, j};
        }
    }
    int ans = bfs(ini);
    if(ans != -1){
        cout << "YES" << endl;
        cout << ans << endl;
        cout << seq << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}