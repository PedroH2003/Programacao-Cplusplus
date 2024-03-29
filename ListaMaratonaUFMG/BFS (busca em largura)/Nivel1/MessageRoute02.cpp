// https://cses.fi/problemset/task/1667

#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+10;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<int> pai(MAX);

void bfs(int s){
    queue<int> q; q.push(s);
    vis[s] = 1;
    pai[s] = s;

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

vector<int> caminho(int v){
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

    int n, m; cin >> n >> m;

    for(int w=0; w<m; w++){
        int i, j; cin >> i >> j; i--, j--;

        g[i].push_back(j);
        g[j].push_back(i);
    }

    bfs(0);
    vector<int> ans = caminho(n-1);

    if(ans.size() == 0) cout << "IMPOSSIBLE" << "\n";
    else{
        cout << ans.size() << "\n";
        for(auto u: ans){
            cout << u+1 << " ";
        }
        cout << "\n";
    }


    return 0;
}