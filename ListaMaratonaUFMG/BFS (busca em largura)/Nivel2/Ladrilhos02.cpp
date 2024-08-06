#include <bits/stdc++.h>

using namespace std;

int h,l;
const int MAX = 210;
const int INF = 0x3f3f3f3f;
int M[MAX][MAX];
bool vis[MAX][MAX];
vector<pair<int,int>> mov = {{-1,0}, {1,0}, {0,-1}, {0,1}};

bool val(pair<int,int> u){
    return u.first >= 0 and u.second >= 0 and u.first < h and u.second < l and !vis[u.first][u.second];
}

int bfs(pair<int,int> u){
    queue<pair<int,int>> q; q.push(u);
    vis[u.first][u.second] = 1;
    int tam=1;

    while(!q.empty()){
        pair<int,int> v = q.front(); q.pop();

        for(auto u: mov){
            u.first += v.first; u.second += v.second;

            if(val(u) and M[u.first][u.second] == M[v.first][v.second]){
                vis[u.first][u.second] = 1;
                tam++;
                q.push(u);
            }
        }
    }

    return tam;
}

int main(){

    cin >> h >> l;

    for(int i=0; i<h; i++){
        for(int j=0; j<l; j++){
            cin >> M[i][j];
        }
    }

    int menor = INF;
    for(int i=0; i<h; i++){
        for(int j=0; j<l; j++){
            if(!vis[i][j]){
                int aux = bfs({i,j});
                if(aux < menor) menor = aux; 
            }
        }
    }
    cout << menor << endl;

    return 0;
}