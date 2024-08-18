#include <bits/stdc++.h>

using namespace std;

const int MAX = 110;
vector<vector<int>> g(MAX);
vector<int> vis(MAX);
vector<int> pai(MAX);

void dfs(int s, int &ans){
    vis[s] = 1;

    for(auto u: g[s]){
        if(!vis[u]){
            pai[u] = s;
            dfs(u, ans);
        }
        else{
            if(pai[s] != u){
                ans++;
            }
        }
    }
}

int main(){

    int n,m; cin >> n >> m;
    for(int i=0; i<m; i++){
        int x,y; cin >> x >> y; x--; y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int aux=0, ans=0;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            aux++;
            if(aux == 2){
                ans=3;
                break;
            }
            dfs(i, ans);
        }
    }
    if(ans != 2) cout << "NO" << endl;
    else cout << "FHTAGN!" << endl;

    return 0;
}