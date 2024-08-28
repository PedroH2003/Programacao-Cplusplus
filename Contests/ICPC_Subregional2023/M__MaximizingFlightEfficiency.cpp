#include <bits/stdc++.h>

using namespace std;

const int MAX = 110;
vector<vector<pair<int,int>>> g(MAX);
vector<vector<pair<int,int>>> confere(MAX);
int vis[MAX];
int dist[MAX];

int bfs(int s){
    memset(vis, 0, sizeof vis);
    memset(dist, -1, sizeof dist);
    queue<pair<int,int>> q; q.push({0, s});
    vis[s] = 1; dist[s] = 0;
    int ans=0;

    while(!q.empty()){
        int v = q.front().second;
        int d = q.front().first;
        q.pop();

        if(v == s){
            for(auto u: g[v]){
                if(!vis[u.second]){   
                    dist[u.second] = u.first; 
                    q.push({u.first, u.second});
                }
            }
        }
        else{
            for(auto u: g[v]){
                if(!vis[u.second] and u.second != v){
                    int w = d + u.first;
                    if(w < dist[u.second]){
                        return -1;
                    }
                    else if(w == dist[u.second]){

                        if(confere[s][u.second].first != -1 and confere[u.second][s].first != -1){
                            confere[s][u.second].first = -1;
                            confere[u.second][s].first = -1;
                            ans++;
                        }   
                    }
                }

            }
        }
    }

    return ans;
}

int main(){

    int n; cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int x; cin >> x;
            g[i].push_back({x, j});
            confere[i].push_back({x,j});
        }
    }

    int ans=0;
    for(int i=0; i<n; i++){
        int num = bfs(i);
        if(num == -1){
            ans = -1;
            break;
        }
        ans+=num;
    }
    cout << ans << endl;

    return 0;
}