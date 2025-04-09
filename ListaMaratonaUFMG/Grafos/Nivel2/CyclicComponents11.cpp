#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5+10;

int n,m;
vector<vector<int>> g(MAX);
vector<int> vis(MAX);
vector<int> pai(MAX);

void dfs(int s, int raiz, bool &ciclo){
    vis[s] = 1;
    if(g[s].size() != 2) ciclo = false;

    for(auto u: g[s]){
        if(!vis[u]){
            pai[u] = s;
            dfs(u, raiz, ciclo);
        }
        else if(u != raiz and s != raiz and pai[s] != u) ciclo = false;
    }
}

int main(){

    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a,b; cin >> a >> b; a--,b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        bool ciclo = true;
        if(!vis[i]){
            dfs(i, i, ciclo);
            if(ciclo) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}