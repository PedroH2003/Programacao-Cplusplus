#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        map<pair<int,int>, int> c1;
        vector<set<pair<int,int>>> c2(s.size()+1); 

        c1[{0, 0}] = 0;
        int x=0,y=0,cont=0;
        int ans=0;
        for(int i=0; i<s.size(); i++){
            int ant_x = x, ant_y = y;
            if(s[i] == 'N') y++;
            else if(s[i] == 'S') y--;
            else if(s[i] == 'W') x--;
            else x++;

            if(c1.find({x,y}) != c1.end()){
                if(c2[c1[{x,y}]].find({ant_x, ant_y}) != c2[c1[{x,y}]].end()){
                    ans++;
                }
                else{
                    c2[c1[{x,y}]].insert({ant_x, ant_y});
                    c2[c1[{ant_x,ant_y}]].insert({x, y});
                    ans+=5;
                }
            }
            else{
                cont++;
                c1[{x,y}] = cont;
                c2[c1[{x,y}]].insert({ant_x, ant_y});
                c2[c1[{ant_x,ant_y}]].insert({x, y});
                ans+=5;
            }
        }
        cout << ans << endl;

    }

    return 0;
}