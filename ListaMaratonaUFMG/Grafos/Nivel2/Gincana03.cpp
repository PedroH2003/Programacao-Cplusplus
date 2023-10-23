#include <bits/stdc++.h>

using namespace std;

int const MAX = 1e3+10;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);

void dfs(int s){
    vis[s] = 1;

    for(auto u: g[s]) if(!vis[u]) dfs(u);
}

int main(){

    int n, m; cin >> n >> m;

    for(int i=0; i<m; i++){
        int a,b; cin >> a >> b; a--; b--;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    int ans=0;
    for(int i=0; i<n; i++) if(!vis[i]){
        dfs(i); ans++;
    }

    cout << ans;

    return 0;
}