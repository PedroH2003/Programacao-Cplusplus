#include <bits/stdc++.h>

using namespace std;

#define REPI(i, a, b) for(int i=a; i<b; i++)

const int MAX = 2e5+10;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<int> pai(MAX);

void dfs(int s, int raiz, bool& ehCiclo){
    vis[s] = 1;

    if(g[s].size() != 2) ehCiclo = false;

    for(auto u: g[s]){
        if(!vis[u]){
            pai[u] = s;
            dfs(u, raiz, ehCiclo);
        }
        else{
            if(u != pai[s] and u != raiz and s != raiz) ehCiclo = false;
        }
    }
}

int main(){

    int n,m; cin >> n >> m;

    REPI(i, 0, m){
        int x,y; cin >> x >> y; x--, y--;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    int ans=0;
    REPI(i, 0, n){
        bool ehCiclo = true;
        if(!vis[i]){
            pai[i] = i;
            dfs(i, i, ehCiclo);
            if(ehCiclo) ans++;
        }
    }
    cout << ans << endl;

    return 0;
}