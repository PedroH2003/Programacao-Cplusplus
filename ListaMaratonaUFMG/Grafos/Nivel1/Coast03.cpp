#include <bits/stdc++.h>

using namespace std;

int m, n;
const int MAX = 1e3+10;
char M[MAX][MAX];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int, int> u){
    return u.first < 0 or u.second < 0 or u.first >= m or u.second >= n or M[u.first][u.second] == '.';
}

bool bfs(pair<int, int> s){

    for(auto u: mov){
        u.first += s.first; u.second += s.second;
        if(val(u)){
            return true;
        }
    }

    return false;
}

int main(){

    cin >> m >> n;
    vector<pair<int, int>> terras;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> M[i][j];
            if(M[i][j] == '#'){
                terras.push_back({i, j});
            }
        }
    }

    int ans=0;
    for(int i=0; i<terras.size(); i++){
        if(bfs(terras[i])){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}