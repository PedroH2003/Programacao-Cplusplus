#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+10;
vector<vector<int>> g(MAX);
vector<int> vis(MAX);
vector<int> pai(MAX);
vector<int> ans;

void ciclo(int u, int s){
    ans.push_back(u);
    for(int i=s; i != u; i = pai[i]){
        ans.push_back(i);
    }
    ans.push_back(u);
}

void dfs(int s){
    vis[s] = 1;

    for(auto u: g[s]){
        if(!vis[u]){
            vis[u] = 1;
            pai[u] = s;
            dfs(u);
        }
        else if(pai[s] != u and ans.size() == 0){
            ciclo(u, s);
        }
    }
}

int main(){

    int n,m; cin >> n >> m;
    for(int i=0; i<m; i++){
        int x,y; cin >> x >> y; x--,y--;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    for(int i=0; i<n and ans.size() == 0; i++){
        if(!vis[i]){
            pai[i] = i;
            dfs(i);
        }
        
    }
    
    if(ans.size() == 0) cout << "IMPOSSIBLE" << endl;
    else{
        cout << ans.size() << endl;
        for(auto u: ans){
            cout << u+1 << " ";
        }
        cout << endl;
    }

    return 0;
}