#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+10, INF = 0x3f3f3f3f;
int n,m, ini,fim;
bool ciclo = false;
vector<vector<int>> g(MAX);
vector<int> vis(MAX);
vector<int> pai(MAX);

void dfs(int s){
    vis[s] = 1;

    for(auto u: g[s]){
        if(!vis[u]){
            pai[u] = s;
            dfs(u);
        }
        else{
            if(pai[s] != u and !ciclo){
                ini = s; fim = u;
                ciclo = true;
            }
        }
    }
    
}

vector<int> path(int v){
    vector<int> ans;
    ans.push_back(fim+1);
    while(v != fim){
        ans.push_back(v+1);
        v = pai[v];
    }
    ans.push_back(fim+1);
    return ans;
}

int main(){

    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a,b; cin >> a >> b; a--,b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> ans;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i);
            if(ciclo){
                ans = path(ini);
                break;
            }
        }
    }

    if(!ciclo) cout << "IMPOSSIBLE" << endl;
    else{
        cout << ans.size() << endl;
        for(auto u: ans) cout << u << " ";
        cout << endl;
    }

    return 0;
}