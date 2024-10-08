#include <bits/stdc++.h>

using namespace std;

const int  MAX = 2e5+10;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<int> pai(MAX);

void dfs(int s, int raiz, bool& ciclo){
    vis[s] = 1;
    if(g[s].size() != 2) ciclo = false;

    for(auto u: g[s]){
        if(!vis[u]){
            vis[u] = 1;
            pai[u] = s;
            dfs(u, raiz, ciclo);
        }
        else if(s != raiz and pai[s] != u and u != raiz) ciclo = false; 
    }
}

int main(){

    int n,m; cin >> n >> m;
    for(int i=0; i<m; i++){
        int x,y; cin >> x >> y; x--,y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int ans=0;
    for(int i=0; i<n; i++){
        bool ciclo=true;
        if(!vis[i]){
            dfs(i, i, ciclo);
            if(ciclo) ans++;
        }
    }
    cout << ans << endl;

    return 0;
}