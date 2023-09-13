// https://codeforces.com/contest/1351/problem/C

#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        string mov; cin >> mov;
        map<pair<int, int>, int> caminhos;
        vector<set<pair<int, int>>> ant_caminhos(mov.size()+1);
        int x=0, y=0, cont=0;
        int ans=0;

        caminhos[{x, y}] = cont;

        for(auto u: mov){
            int antx = x, anty = y;
            if(u == 'N') x--;
            else if(u == 'S') x++;
            else if(u == 'W') y--;
            else y++;

            pair<int, int> pos = {x, y};

            if(caminhos.find(pos) == caminhos.end()){
                cont++;
                caminhos[pos] = cont;
                ant_caminhos[cont].insert(make_pair(antx, anty));
                ant_caminhos[caminhos[make_pair(antx, anty)]].insert(pos);
                ans += 5;
            }
            else{
                int aux = caminhos[pos];
                
                if(ant_caminhos[aux].find(make_pair(antx, anty)) != ant_caminhos[aux].end()){
                    ans += 1;
                }
                else{
                    ans += 5;
                    ant_caminhos[aux].insert(make_pair(antx, anty));
                    ant_caminhos[caminhos[make_pair(antx, anty)]].insert(pos);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}