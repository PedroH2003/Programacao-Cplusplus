#include <bits/stdc++.h>

using namespace std;

int main(){

    int cont = 0;
    while(true){
        int a, v; cin >> a >> v;
        if(a == 0 and v == 0){
            break;
        }
        vector<vector<int>> g(a);

        for(int w=0; w<v; w++){
            int i, j; cin >> i >> j; i--; j--;

            g[i].push_back(j);
            g[j].push_back(i);
        }

        vector<int> maior;
        int aux = 0;
        for(int i=0; i<a; i++){
            if(g[i].size() > aux){
                maior.clear();
                maior.push_back(i+1);
                aux = g[i].size();
            }
            else if(g[i].size() == aux){
                maior.push_back(i+1);
            }
        }

        cout << "Teste " << cont+1 << "\n";
        for(auto u: maior){
            cout << u << " ";
        }
        cout << "\n\n";

        cont++;
    }

    return 0;
}