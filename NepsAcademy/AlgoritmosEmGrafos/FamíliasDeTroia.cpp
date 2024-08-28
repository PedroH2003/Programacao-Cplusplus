#include <bits/stdc++.h>

using namespace std; 

const int MAX = 5e4+10;
vector<vector<int>> g(MAX);
vector<int> vis(MAX);

void dfs(int s){
    vis[s] = 1;

    for(auto u: g[s]) if(!vis[u]) dfs(u);
}

int main(){

    int n,m; cin >> n >> m;
    for(int i=0; i<m; i++){
        int x,y; cin >> x >> y; x--; y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int ans=0;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i);
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}