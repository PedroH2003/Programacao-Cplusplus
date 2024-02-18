#include <bits/stdc++.h>

using namespace std;

const int MAX = 110;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<int> pai(MAX);

void dfs(int s, int &cont, bool &ans){
    vis[s] = 1;

    for(auto u: g[s]){
        if(!vis[u]){
            pai[u] = s;
            dfs(u, cont, ans);
        }
        else{
            if(pai[s] != u and pai[u] != s){
                cont++;
                // cout << cont << ": " << s+1 << " " << u+1 << endl;
                if(cont == 2){
                    ans = true;
                }
                else{
                    ans = false;
                }
            }
        }
    }
}

int main(){

    int n, m, cont=0, aux=0; cin >> n >> m;
    bool ans=false;

    for(int i=0; i<m; i++){
        int x, y; cin >> x >> y; x--; y--;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    for(int i=0; i<n; i++){
        if(!vis[i] and aux == 0){
            pai[i] = i;
            dfs(i, cont, ans);
            aux = 1;
        }
        else if(!vis[i]){
            ans = false;
            break;
        }
    }

    if(ans) cout << "FHTAGN!" << endl;
    else cout << "NO" << endl;

    return 0;
}