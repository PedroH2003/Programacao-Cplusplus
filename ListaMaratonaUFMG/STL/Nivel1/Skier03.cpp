#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        map<pair<int, int>, int> pos;
        vector<set<pair<int, int>>> caminhos(s.size()+1);
        int x=0, y=0, ans=0, cont=0;

        pos[{x,y}] = cont;
        int ant_x, ant_y;
        for(auto u: s){
            ant_x = x; ant_y = y;
            if(u == 'N') y++;
            else if(u == 'S') y--;
            else if(u == 'E') x++;
            else x--;

            if(pos.find({x,y}) == pos.end()){
                cont++;
                pos[{x,y}] = cont;

                caminhos[pos[{ant_x, ant_y}]].insert({x, y});
                caminhos[pos[{x,y}]].insert({ant_x, ant_y});
                ans += 5;
            }
            else{
                if(caminhos[pos[{x,y}]].find({ant_x, ant_y}) == caminhos[pos[{x,y}]].end()){

                    caminhos[pos[{x, y}]].insert({ant_x, ant_y});
                    caminhos[pos[{ant_x, ant_y}]].insert({x, y});
                    ans += 5;
                }
                else{
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
    

    return 0;
}

