#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, maior=1; cin >> n >> m;
    vector<vector<int>> pista(n);

    for(int i=0; i<n; i++){
        int cont=1;
        for(int j=0; j<m; j++){
            int aux, dif; cin >> aux;
            pista[i].push_back(aux);

            if(j != 0){
                dif = pista[i][j] - pista[i][j-1];

                if(dif <= 1 and dif >= -1){
                    cont++;
                    if(cont > maior){
                        maior = cont;
                    }

                }
                else{
                    cont = 1;
                }

            }
        }
    }

    for(int j=0; j<m; j++){
        int cont=1;
        for(int i=0; i<n; i++){
            int dif;

            if(i != 0){
                dif = pista[i][j] - pista[i-1][j];

                if(dif <= 1 and dif >= -1){
                    cont++;
                    if(cont > maior){
                        maior = cont;
                    }

                }else{
                    cont = 1;
                }
            
            }
        }
    }

    cout << maior;

    return 0;
}