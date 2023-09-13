// https://codeforces.com/contest/977/problem/E

#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5+10;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);

void dfs(int s, const int aux, bool &ciclo){

    vis[s] = 1;
    int temp = 0;

    if(g[s].size() != 2)
    {
        ciclo = 0;
    }

    for(auto u : g[s]){
        if(!vis[u]){
            dfs(u, aux, ciclo);
        }
        else
        {
            temp++;
        }
        
    }

    if(ciclo){
        if(temp == 2){
            for(auto u : g[s]){
                if(u == aux){
                    temp++;
                }
            }

            if(temp != 3){
                ciclo = 0;
            }
        }
    }


}

int main(){

    int n, m, ans=0; cin >> n >> m;

    for(int w=0; w<m; w++){
        int i, j; cin >> i >> j; i--; j--;

        g[i].push_back(j);
        g[j].push_back(i);
    }


    for(int i=0; i<n; i++)
    {
        if(!vis[i]){
            bool ciclo=1;
            dfs(i, i, ciclo);

            if(ciclo)
            {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}