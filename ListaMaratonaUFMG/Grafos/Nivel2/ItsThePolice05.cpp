#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 2e5+10;
int n,m;
vector<vector<int>> g(MAX);
vector<int> ans(MAX, 1);

void dfs(int s){
    ans[s] = 0;
    for(auto u: g[s]) ans[u] = 0;
}

int main(){

    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a,b; cin >> a >> b; a--,b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int menor = INF,pos;
    for(int i=0; i<n; i++){
        int aux = g[i].size();

        if(aux < menor){
            menor = aux;
            pos = i;
        }
    }
    dfs(pos);
    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}