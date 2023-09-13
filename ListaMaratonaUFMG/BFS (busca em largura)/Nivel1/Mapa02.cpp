// https://olimpiada.ic.unicamp.br/pratique/p2/2017/f2/mapa/

#include <bits/stdc++.h>

using namespace std;

int l, c; 

const int MAX = 110;
char M[MAX][MAX];
bool vis[MAX][MAX];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int, int> u){
    return u.first >= 0 and u.second >= 0 and u.first < l and u.second < c
    and M[u.first][u.second] == 'H' and !vis[u.first][u.second];
}

pair<int, int> bfs(pair<int, int> s){
    vis[s.first][s.second] = 1;

    queue<pair<int, int>> q; q.push(s);

    pair<int, int> v;
    while(!q.empty()){
        v = q.front(); q.pop();

        for(auto u: mov){
            u.first += v.first;
            u.second += v.second;

            if(val(u)){
                q.push(u);
                vis[u.first][u.second] = 1;
            }
        }
    }

    return v;
}

int main(){

    cin >> l >> c;
    
    pair<int, int> s;
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            cin >> M[i][j];
            if(M[i][j] == 'o'){
                s = {i, j};
            }
        }
    }

    pair<int, int> ans = bfs(s);
    cout << ans.first+1 << " " << ans.second+1;



    return 0;
}