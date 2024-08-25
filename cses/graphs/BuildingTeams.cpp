#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5+10;
vector<vector<int>> g(MAX);
vector<int> vis(MAX);
vector<int> ans(MAX);
int eh_possivel = 1;

void bfs(int s){
    queue<int> q; q.push(s);
    vis[s] = 1; ans[s] = 1;

    while(!q.empty()){
        int v = q.front(); q.pop();

        for(auto u: g[v]){
            if(!vis[u]){
                vis[u] = 1;
                if(ans[v] == 1) ans[u] = 2;
                else ans[u] = 1;
                q.push(u);
            }
            else{
                if(ans[u] == ans[v]) eh_possivel = 0;
            }
        }
    }
}

int main(){

    int n,m; cin >> n >> m;
    for(int i=0; i<m; i++){
        int x,y; cin >> x >> y; x--, y--;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    for(int i=0; i<n and eh_possivel; i++){
        if(!vis[i]){
            bfs(i);
        }
    }

    if(eh_possivel){
        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }


    return 0;
}