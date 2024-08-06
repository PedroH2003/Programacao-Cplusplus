#include <bits/stdc++.h>

using namespace std;

const long long INF = 0x3f3f3f3f3f3f3f3fll;

int main(){

    int n,t; cin >> n >> t;
    map<int,vector<pair<int,int>>> p;
    vector<int> tam;

    for(int i=0; i<n; i++){
        int x,y,z; cin >> x >> y >> z;

        x/=2;
        p[y].push_back({x, z});
    }
    for(int i=0; i<t; i++){
        int x,y; cin >> x >> y;

        int num = min(x,y);
        tam.push_back(num);
    }

    long long ans=0;
    for(int i=0; i<t; i++){
        if(p.find(i+1) != p.end() and tam[i] != 0){
            vector<pair<int,int>> aux = p[i+1];
            sort(aux.begin(), aux.end());
            long long maior= -INF;
            long long soma = 0;
            int qtd = tam[i];
            int pos = aux.size()-1;

            for(int j=pos; j>=0; j--){
                // cout << "----------\n";
                // cout << soma << " " << maior << " " << qtd << " " << aux[j].first << " " << aux[j].second << " " << j << endl;
                if(qtd - aux[j].first >= 0){
                    // cout << soma << " " << maior << " " << qtd << " " << aux[j].first << " " << aux[j].second << " " << j << endl;
                    soma += aux[j].second;
                    maior = max(maior, soma);
                    qtd -= aux[j].first;
                    // cout << soma << " " << maior << " " << qtd << " " << aux[j].first << " " << aux[j].second << " " << j << endl;
                }

                if(qtd == 0) j = 0;
                
                if(j == 0){

                    for(int w=aux.size()-1; w>pos and qtd != 0; w--){
                        if(qtd - aux[w].first >= 0){
                            soma += aux[w].second;
                            maior = max(maior, soma);
                            qtd -= aux[w].first;
                        }
                    }    

                    qtd = tam[i];
                    soma = 0;
                    pos--;
                    if(pos != -1) j = pos+1;
                }

            }
            soma = 0;
            ans += max(maior, soma);
        }
    }
    cout << ans << endl;

    return 0;
}