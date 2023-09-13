// https://neps.academy/br/exercise/57

#include <bits/stdc++.h>

using namespace std;

int n, m;
const int MAX = 1000;
int M[MAX][MAX];
bool vis[MAX][MAX];
vector<pair<int, int>> mov = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool val(pair<int, int> u){
    return u.first >= 0 and u.second >= 0 and u.first < n and u.second < m and M[u.first][u.second] != 0
    and !vis[u.first][u.second];
}

int bfs(pair<int, int> s){

    int cont=0; vis[s.first][s.second] = 1;

    while(M[s.first][s.second] != 2){
        for(auto u : mov){
            u.first += s.first; u.second += s.second;

            if(val(u)){
                s.first = u.first; s.second = u.second;
                cont++;
                break;
            }
        }
        vis[s.first][s.second] = 1;
    }

    cont++;
    return cont;
}

int main(){

    cin >> n >> m;
    pair<int, int> s;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> M[i][j];
            if(M[i][j] == 3){
                s = {i, j};
            }
        }
    }

    int ans = bfs(s);
    cout << ans;

    return 0;
}