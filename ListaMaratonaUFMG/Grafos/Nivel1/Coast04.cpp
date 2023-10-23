#include <bits/stdc++.h>

using namespace std;

int const MAX = 1e3+10;
int m, n; 
char M[MAX][MAX];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int, int> u){
    return u.first < 0 or u.second < 0 or u.first == m or u.second == n or M[u.first][u.second] == '.';
}

bool costa(pair<int, int> s){
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

    vector<pair<int, int>> terra;
    for(int i=0; i<m; i++) for(int j=0; j<n; j++){
        cin >> M[i][j];
        if(M[i][j] == '#') terra.push_back({i, j});
    }

    int ans=0;
    for(int i=0; i<terra.size(); i++){
        if(costa(terra[i])){
            ans++;
        }
    }
    cout << ans;

    return 0;
}