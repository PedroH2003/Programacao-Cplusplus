#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5+10;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<int> pai(MAX);

void dfs(int s, int raiz, bool &eh_ciclo){
    vis[s] = 1;

    if(g[s].size() > 2 or g[s].size() < 2) eh_ciclo = false;

    for(auto u : g[s]){
        if(!vis[u]){
            pai[u] = s;
            dfs(u, raiz, eh_ciclo);
        }
        else{
            if(u != pai[s] and u != raiz and s != raiz){
                eh_ciclo = false;
            }
        }
    }
}

int main(){

    int n, m; cin >> n >> m;

    for(int w=0; w<m; w++){
        int i, j; cin >> i >> j; i--, j--;

        g[i].push_back(j);
        g[j].push_back(i);
    }

    int ans=0;
    for(int i=0; i<n; i++){
        bool eh_ciclo = true;
        if(!vis[i]){
            pai[i] = i;
            dfs(i, i, eh_ciclo);
            if(eh_ciclo){
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}