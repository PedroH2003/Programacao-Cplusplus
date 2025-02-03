#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5+10;
vector<vector<int>> g(MAX);
int vis[MAX];
int pai[MAX];

void bfs(int s, int fim){
    memset(vis, 0, sizeof vis);
    queue<int> q; q.push(s);
    vis[s] = 1; pai[s] = s;

    while(!q.empty()){
        int v = q.front(); q.pop();

        if(v == fim){
            break;
        }

        for(auto u: g[v]){
            if(!vis[u]){
                vis[u] = 1;
                q.push(u);
                pai[u] = v;
            }
        }
    }
}

vector<int> path(int v){
    vector<int> ans; ans.push_back(v);
    while(pai[v] != v){
        v = pai[v];
        ans.push_back(v);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){

    int n,m,a,b; cin >> n >> m >> a >> b; n++;

    for(int i=0; i<m; i++){
        int x,y; cin >> x >> y;

        g[x].push_back(y);
        g[y].push_back(x);
    }


    bfs(0, a);
    vector<int> path_a = path(a);

    bfs(0, b);
    vector<int> path_b = path(b);
    for(int i=1; i<path_a.size(); i++){
        bfs(path_a[i], b);
        vector<int> aux = path(b);

        if(aux.size() <= path_b.size()){
            path_b = aux;
        }
    }


    set<int> ans;
    for(int i=1; i<path_a.size(); i++) ans.insert(path_a[i]);
    for(int i=1; i<path_b.size(); i++) ans.insert(path_b[i]);
    cout << ans.size() << endl;

    return 0;
}