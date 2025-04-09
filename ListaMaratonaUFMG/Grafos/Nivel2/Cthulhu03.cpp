#include <bits/stdc++.h>

using namespace std;

const int MAX = 110;
int n,m, cont=0;
bool ans = false;
vector<vector<int>> g(MAX);
vector<int> vis(MAX);
vector<int> pai(MAX);

void dfs(int s){
    vis[s] = 1;

    for(auto u: g[s]){
        if(!vis[u]){
            pai[u] = s;
            dfs(u);
        }
        else if(pai[s] != u){
            cont++;
            if(cont <= 2) ans = true;
            else{
                ans = false;
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

    int flag = 0;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            if(flag){
                ans = false;
                break;
            }
            dfs(i);
            flag = 1;
        }
    }
    if(ans) cout << "FHTAGN!" << endl;
    else cout << "NO" << endl;

    return 0;
}