#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5+10;
vector<vector<int>> g(MAX);

int main(){

    int n,m; cin >> n >> m;
    vector<int> ans(n, 1);

    for(int i=0; i<m; i++){
        int a,b; cin >> a >> b; a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int menor=-1,pos;
    for(int i=0; i<n; i++){
        if(g[i].size() < menor){
            menor = g[i].size();
            pos = i;
        }
    }

    ans[pos] = 0;
    for(auto u: g[pos]){
        ans[u] = 0;
    }
    for(auto u: ans) cout << u << " ";

    return 0;
}