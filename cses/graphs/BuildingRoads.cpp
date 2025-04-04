#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 1e5+10;

int n,m;
vector<vector<int>> g(MAX);
vector<int> vis(MAX);

void dfs(int s){
    vis[s] = 1;
    for(auto u: g[s]) if(!vis[u]) dfs(u);
}

int main(){
    cin >> n >> m;

    for(int i=0; i<m; i++){
        int a,b; cin >> a >> b; a--,b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int aux = -1;
    vector<pair<int,int>> ans;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i);
            if(aux == -1) aux = i+1;
            else {
                ans.push_back({aux, i+1});
                aux = i + 1;
            }
        }
    }
    cout << ans.size() << endl;
    for(auto u: ans) cout << u.first << " " << u.second << endl;

    return 0;
}