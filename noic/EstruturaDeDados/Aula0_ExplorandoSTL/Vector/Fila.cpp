// https://olimpiada.ic.unicamp.br/pratique/pj/2014/f1/fila/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m; cin >> n;
    vector<int> fila (n);
    vector<bool> estaNaFila (100001, true);

    for(int i=0; i<n; i++){
        cin >> fila[i];
    }

    cin >> m;
    for(int i=0; i<m; i++){
        int aux; cin >> aux;
        estaNaFila[aux] = false;
    }

    for(auto u : fila){
        if(estaNaFila[u]) cout << u << " ";
    }

    
    return 0;
}