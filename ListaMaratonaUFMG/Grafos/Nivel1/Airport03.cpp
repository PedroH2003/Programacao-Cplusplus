#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, v, cont=1;
    while(cin >> a >> v and a != 0 and v != 0){
        vector<vector<int>> g(a);
        for(int i=0; i<v; i++){
            int x, y; cin >> x >> y; x--; y--;
            
            g[x].push_back(y);
            g[y].push_back(x);
        }
        
        vector<int> ans;
        int maior=0;
        for(int i=0; i<a; i++){
            if(g[i].size() > maior){
                maior = g[i].size();
                ans.clear();
                ans.push_back(i+1);
            }
            else if(g[i].size() == maior){
                ans.push_back(i+1);
            }
        }

        cout << "Teste " << cont << endl;
        for(auto u: ans) cout << u << " ";
        cout << "\n\n";
        cont++;
    }


    return 0;
}