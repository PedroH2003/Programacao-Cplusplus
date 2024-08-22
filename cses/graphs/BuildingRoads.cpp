#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5+10;
vector<vector<int>> g(MAX);
vector<int> vis(MAX);

void dfs(int s){
    vis[s] = 1;
    for(auto u: g[s]) if(!vis[u]) dfs(u);
}

int main(){

    int n,m; cin >> n >> m;
    for(int i=0; i<m; i++){
        int x,y; cin >> x >> y; x--, y--;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    int k=-1;
    vector<int> roads;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            k++;
            roads.push_back(i);
            dfs(i);
        }
    }
    cout << k << endl;
    for(int i=1; i<roads.size(); i++){
        cout << roads[i-1]+1 << " " << roads[i]+1 << endl;
    }

    return 0;
}