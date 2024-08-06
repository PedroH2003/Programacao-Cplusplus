#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        map<pair<int,int>,int> pos;
        vector<set<pair<int,int>>> caminhos(s.size()+1);
        
        pos[{0,0}] = 0;
        int x=0,y=0,cont=0,ans=0;
        for(auto u: s){
            int x_ant = x, y_ant = y;
            if(u == 'S') y--;
            else if(u == 'N') y++;
            else if(u == 'W') x--;
            else x++;

            pair<int,int> ant = {x_ant, y_ant};
            pair<int,int> atual = {x, y};

            if(pos.find(atual) == pos.end()){
                cont++;
                pos[atual] = cont;
                caminhos[pos[ant]].insert(atual);
                caminhos[pos[atual]].insert(ant);
                ans+=5;
            }
            else{
                if(caminhos[pos[ant]].find(atual) == caminhos[pos[ant]].end()){
                    caminhos[pos[ant]].insert(atual);
                    caminhos[pos[atual]].insert(ant);
                    ans+=5;                    
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