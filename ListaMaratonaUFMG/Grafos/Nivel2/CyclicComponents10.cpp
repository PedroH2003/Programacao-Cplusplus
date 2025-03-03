#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

const int INF = 0x3f3f3f3f;
const int MAX = 2e5+10;

int n,m;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<int> pai(MAX);

void dfs(int s, int raiz, bool& ciclo){
    vis[s] = true;
    if(g[s].size() != 2) ciclo = false;

    for(auto u: g[s]){
        if(!vis[u]){
            pai[u] = s;
            dfs(u, raiz, ciclo);
        }
        else if(pai[s] != u and u != raiz and s != raiz) ciclo = false;
    }
}

int main(){

    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a,b; cin >> a >> b; a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int ans = 0;
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