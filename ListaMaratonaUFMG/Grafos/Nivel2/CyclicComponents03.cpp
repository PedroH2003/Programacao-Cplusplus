#include <bits/stdc++.h>

using namespace std;

int n,m;
const int MAX = 2e5+10;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<int> pai(MAX);

bool dfs(int s, int raiz, bool &conf){
    vis[s] = 1;

    if(g[s].size() != 2){
        conf = false;
    }

    for(auto u: g[s]){
        if(!vis[u]){
            pai[u] = s;
            dfs(u, raiz, conf);
        }
        else{
            if(pai[s] != u and u != raiz and s != raiz){
                conf = false;
            }
        }
    }
}


int main(){

    cin >> n >> m;

    for(int w=0; w<m; w++){
        int i,j; cin >> i >> j; i--; j--;

        g[i].push_back(j);
        g[j].push_back(i);
    }

    int ans=0;
    for(int i=0; i<n; i++){
        bool conf = true;
        if(!vis[i]){
            pai[i] = i;
            dfs(i, i, conf);
            if(conf){
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}