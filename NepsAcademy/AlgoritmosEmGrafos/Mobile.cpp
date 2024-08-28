#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+10;
vector<vector<int>> g(MAX);
vector<int> vis(MAX);
string ans="bem";

void dfs(int s){
    vis[s] = 1;
    int aux = -1;
    for(auto u: g[s]){
        if(!vis[u]){
            int num = g[u].size();
            if(aux == -1){
                aux = num;
            }
            else{
                if(aux != num){
                    ans = "mal";
                }
            }
            dfs(u);
        }
    }
}

int main(){

    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x,y; cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(0);
    cout << ans << endl;


    return 0;
}