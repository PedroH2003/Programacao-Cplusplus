#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5+10;
const int INF = 0x3f3f3f3f;
vector<vector<int>> g(MAX);
vector<int> ans(MAX, 1);

void dfs(int pos){
    ans[pos] = 0;
    for(auto u: g[pos]){
        ans[u] = 0;
    }
}

int main(){

    int n,m; cin >> n >> m;
    for(int i=0; i<m; i++){
        int a,b; cin >> a >> b; a--,b--;

        g[a].push_back(b);
        g[b].push_back(a);
    }


    int menor=INF, pos;    
    for(int i=0; i<n; i++){
        if(g[i].size() < menor){
            menor = g[i].size();
            pos = i;
        }
    }
    dfs(pos);
    for(int i=0; i<n; i++) cout << ans[i] << " ";
    cout << endl;

    return 0;
}