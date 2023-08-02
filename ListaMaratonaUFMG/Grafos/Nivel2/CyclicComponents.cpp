/*You are given an undirected graph consisting of n
 vertices and m
 edges. Your task is to find the number of connected components which are cycles.

Here are some definitions of graph theory.

An undirected graph consists of two sets: set of nodes (called vertices) and set of edges. Each edge connects a pair of vertices. All edges are bidirectional (i.e. if a vertex a
 is connected with a vertex b
, a vertex b
 is also connected with a vertex a
). An edge can't connect vertex with itself, there is at most one edge between a pair of vertices.

Two vertices u
 and v
 belong to the same connected component if and only if there is at least one path along edges connecting u
 and v
.

A connected component is a cycle if and only if its vertices can be reordered in such a way that:

the first vertex is connected with the second vertex by an edge,
the second vertex is connected with the third vertex by an edge,
...
the last vertex is connected with the first vertex by an edge,
all the described edges of a cycle are distinct.
A cycle doesn't contain any other edges except described above. By definition any cycle contains three or more vertices.

There are 6
 connected components, 2
 of them are cycles: [7,10,16]
 and [5,11,9,15]
.
Input
The first line contains two integer numbers n
 and m
 (1≤n≤2⋅105
, 0≤m≤2⋅105
) — number of vertices and edges.

The following m
 lines contains edges: edge i
 is given as a pair of vertices vi
, ui
 (1≤vi,ui≤n
, ui≠vi
). There is no multiple edges in the given graph, i.e. for each pair (vi,ui
) there no other pairs (vi,ui
) and (ui,vi
) in the list of edges.

Output
Print one integer — the number of connected components which are also cycles.*/

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