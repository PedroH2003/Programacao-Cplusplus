#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5+10;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<int> num_ruas(MAX, 0);
vector<int> policia(MAX, 1);

void zeros(int s){
    policia[s] = 0;

    for(auto u: g[s]){
        policia[u] = 0;
    }
}

void dfs(int s){
    vis[s] = 1;

    for(auto u: g[s]){
        num_ruas[u]++;
        if(!vis[u]){
            dfs(u);
        }
    }
}

int main(){

    int n, m; cin >> n >> m;

    for(int w=0; w<m; w++){
        int i, j; cin >> i >> j; i--, j--;

        g[i].push_back(j);
        g[j].push_back(i);
    }

    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    
    int menor = num_ruas[0], posicao=0;
    for(int i=0; i<n; i++){
        if(num_ruas[i] < menor){
            menor = num_ruas[i];
            posicao = i;
        }
    }
    zeros(posicao);

    for(int i=0; i<n; i++){
        cout << policia[i] << " ";
    }
    
    return 0;
}
