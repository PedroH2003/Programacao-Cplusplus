/*Yuriy is a corrupted head of police. Every day he has to set policemen to the posts in the city so that local gangs still could commit crimes. The city has n squares connected by m streets so that the j-th street connects the aj-th and the bj-th squares. A policeman, being set on some square, can observe this square and also all squares connected with it. Yuriy wants to set policemen in such a way that at least one square is not observed, which lets the gangs to do their dark business on this square. Of course, Yuriy doesn't want to be suspicious, so he plans to set policemen to as many squares as possible.

Input
The first line contains two space-separated integers: n and m (1 ≤ n ≤ 2·105, 0 ≤ m ≤ 2·105) — the numbers of squares and streets in the city.

Each of the next m lines contains two space-separated integers: aj and bj (1 ≤ aj, bj ≤ n, aj ≠ bj) — the numbers of squares connected by the j-th street. Every pair of squares can be connected by at most one street.

Output
Output n space-separated integers. On the i-th position output 1, if a policeman should be set to the i-th square, or 0 if it shouldn't be done. If there are many possible solutions, output any of them.*/

#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5+10;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<int> num_ruas(MAX, 0);
vector<int> ans(MAX, 1);

void bfs(int s){

    vis[s] = 1;

    for(auto u : g[s]){

        num_ruas[u]++;
        if(!vis[u]){
            bfs(u);
        }
    }
}

void no_police(int s){

    ans[s] = 0;
    for(auto u : g[s]){
        ans[u] = 0;
    }
}

int main(){

    int n, m; cin >> n >> m;
    
    for(int w=0; w<m; w++){
        int i, j; cin >> i >> j; i--; j--;

        g[i].push_back(j);
        g[j].push_back(i);
    }

    for(int i=0; i<n; i++){
        if(!vis[i]){
            bfs(i);
        }
    }

    int menor = num_ruas[0]; int pos = 0;
    for(int i=0; i<n; i++)
    {
        if(num_ruas[i] < menor){
            menor = num_ruas[i];
            pos = i;
        }
    }

    no_police(pos);

    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }



    return 0;
}