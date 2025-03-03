#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

const int INF = 0x3f3f3f3f;
const int MAX = 1e5+10;

int n,m;
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
                vis[u] = 1; pai[u] = v;
                q.push(u);
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

    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a,b; cin >> a >> b; a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    bfs(0);

    vector<int> ans = path(n-1);
    if(ans.size() == 0) cout << "IMPOSSIBLE";
    else{
        cout << ans.size() << endl;
        for(auto u: ans) cout << u+1 << " ";
    }
    cout << endl;

    return 0;
}