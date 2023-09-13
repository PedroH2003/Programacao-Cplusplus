#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e3+10;

vector<vector<int>> g(MAX);
vector<bool> vis(MAX);

void dfs(int s){
    vis[s] = 1;

    for(auto u: g[s]){
        if(!vis[u]) dfs(u);
    }
}

int main(){

    int n, m; cin >> n >> m;

    for(int w=0; w<m; w++){
        int i, j; cin >> i >> j; i--, j--;

        g[i].push_back(j);
        g[j].push_back(i);
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            ans++;
            dfs(i);
        }
    }

    cout << ans;

    return 0;
}