#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5+10;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<int> pai(MAX);

void dfs(int s, int raiz, bool& ciclo){
    vis[s] = 1;
    if(g[s].size() != 2) ciclo = false;

    for(auto u: g[s]){
        if(!vis[u]){
            pai[u] = s;
            dfs(u, raiz, ciclo);
        }
        else if(u != pai[s] and u != raiz and s != raiz) ciclo = false;
    }
}

int main(){

    int n,m,ans=0; cin >> n >> m;
    for(int i=0; i<m; i++){
        int a,b; cin >> a >> b; a--,b--;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    for(int i=0; i<n; i++){
        bool ciclo = true;
        if(!vis[i]){
            pai[i] = i;
            dfs(i, i, ciclo);
            if(ciclo) ans++;
        }
    }
    cout << ans << endl;

    return 0;
}