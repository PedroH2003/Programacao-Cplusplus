#include <bits/stdc++.h>

using namespace std;

int h, l;
const int MAX = 210;
int M[MAX][MAX];
bool vis[MAX][MAX];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
vector<int> cor(40010, 0);

bool val(pair<int, int> u, pair<int, int> v){
    return u.first >= 0 and u.second >= 0 and u.first < h and u.second < l and !vis[u.first][u.second]
    and M[u.first][u.second] == M[v.first][v.second];
}

void bfs(pair<int, int> s){
    vis[s.first][s.second] = 1;
    queue<pair<int,int>> q; q.push(s);
    cor[M[s.first][s.second]]++;

    while(!q.empty()){
        pair<int, int> v = q.front(); q.pop();

        for(auto u: mov){
            u.first += v.first; u.second += v.second;

            if(val(u, v)){
                vis[u.first][u.second] = 1;
                q.push(u);
                cor[M[s.first][s.second]]++;
            }
        }
    }
}

int main(){

    cin >> h >> l;
    set<int> aux;

    for(int i=0; i<h; i++){
        for(int j=0; j<l; j++){
            cin >> M[i][j];

            if(M[i][j] != 0){
                aux.insert(M[i][j]);
            }
        }
    }


    for(int i=0; i<h; i++){
        for(int j=0; j<l; j++){
            if(!vis[i][j] and M[i][j] != 0){
                bfs({i, j});
            }
        }
    }

    int ans, menor=210;
    for(auto it=aux.begin(); it != aux.end(); it++){
        if(cor[*it] < menor){
            menor = cor[*it];
            ans = *it;
        }
    }

    if(aux.size() == 1){
        if(ans != 1){
            ans--;
        }
        else{
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}