#include <bits/stdc++.h>

using namespace std;

#define REPI(i, a, b) for(int i=a; i<b; i++)

const int MAX = 1e5+10;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<int> pai(MAX);

void bfs(int s){
    queue<int> q; q.push(s);
    vis[s] = 1; pai[s] = s;

    while(!q.empty()){
        int v = q.front(); q.pop();

        for(auto u: g[v]){
            if(!vis[u]){
                vis[u] = 1;
                pai[u] = v;
                q.push(u);
            }
        }
    }
}

vector<int> path(int v){
    vector<int> ans;
    if(vis[v]){
        ans.push_back(v+1);
        while(pai[v] != v){
            v = pai[v];
            ans.push_back(v+1);
        }
        reverse(ans.begin(), ans.end());
    }
    return ans;
}

int main(){

    int n,m; cin >> n >> m;
    REPI(i, 0, m){
        int x,y; cin >> x >> y; x--, y--;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    bfs(0);
    vector<int> ans = path(n-1);
    if(ans.size() == 0) cout << "IMPOSSIBLE" << endl;
    else{
        cout << ans.size() << endl;
        for(auto u: ans) cout << u << " ";
    }

    return 0;
}