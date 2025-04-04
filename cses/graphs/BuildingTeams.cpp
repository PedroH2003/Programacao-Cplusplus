#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 1e5+10;

int n,m;
vector<vector<int>> g(MAX);
vector<int> ans(MAX, 0);
vector<int> vis(MAX);
bool solution = true;

void bfs(int s){
    queue<int> q; q.push(s);
    vis[s] = 1; ans[s] = 1;

    while(!q.empty()){
        int v = q.front(); q.pop();

        for(auto u: g[v]){
            if(ans[u] == 0) ans[u] = ans[v] * -1;
            if(ans[u] == ans[v]) solution = false;

            if(!vis[u]){
                vis[u] = 1;
                q.push(u);
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a,b; cin >> a >> b; a--,b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for(int i=0; i<n and solution; i++){
        if(!vis[i]){
            bfs(i);
        }
    }

    if(!solution) cout << "IMPOSSIBLE" << endl;
    else{
        for(int i=0; i<n; i++){
            if(ans[i] == -1) ans[i] = 2;
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}