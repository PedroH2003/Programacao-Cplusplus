// https://neps.academy/br/exercise/57

#include <bits/stdc++.h>

using namespace std;

int n, m; 

const int MAX = 1e3+10;
int M[MAX][MAX];
bool vis[MAX][MAX];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int, int> u){
    return u.first >= 0 and u.second >= 0 and u.first < n and u.second < m 
    and M[u.first][u.second] == 1 and !vis[u.first][u.second];
}

int bfs(pair<int, int> s){
    int ans=1;
    queue<pair<int, int>> q; q.push(s);
    vis[s.first][s.second] = 1;

    while(!q.empty()){
        pair<int, int> v = q.front(); q.pop();
        ans++;
        if(M[v.first][v.second] == 2){
            break;
        }

        for(auto u: mov){
            u.first += v.first;
            u.second += v.second;

            if(val(u)){
                vis[u.first][u.second] = 1;
                q.push(u);
            }
        }
    }

    return ans;
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