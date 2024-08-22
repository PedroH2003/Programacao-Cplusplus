#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5+10;
vector<vector<int>> g(MAX);
vector<int> vis(MAX);
vector<int> pai(MAX);

void bfs(int s){
    queue<int> q; q.push(s);
    vis[s] = 1; pai[s] = s;

    while(!q.empty()){
        int v = q.front(); q.pop();

        for(auto u: g[v]){
            if(!vis[u]){
                q.push(u);
                pai[u] = v;
                vis[u] = 1;
            }
        }
    }
}

vector<int> path(int v){
    vector<int> ans;
    if(vis[v]){
        ans.push_back(v);
        while(pai[v] != v){
            v = pai[v];
            ans.push_back(v);
        }
        reverse(ans.begin(), ans.end());
    }
    return ans;
}

int main(){

    int n,m; cin >> n >> m;
    for(int i=0; i<m; i++){
        int x,y; cin >> x >> y; x--, y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    bfs(0);
    vector<int> ans = path(n-1);
    if(ans.size() == 0) cout << "IMPOSSIBLE" << endl;
    else{
        cout << ans.size() << endl;
        for(auto u: ans) cout << u+1 << " ";
        cout << endl;
    }

    return 0;
}