#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> v;

int buscab(int x){
    int ini=0, fim=n-1, meio;

    while(ini <= fim){
        meio = (ini + fim) / 2;

        if(v[meio] == x){ // se o while terminar sem a função retornar, o número não está no vetor
            return meio;
        }
        else if(v[meio] < x ){ // se o número está na frente, olho para a metade depois de meio
            ini = meio + 1;
        }
        else{ // se o número está atrás, olho para a metade antes de meio
            fim = meio - 1;
        }
        
    }

    return -1; // se o while terminar sem a função retornar, o número não está no vetor
}

int main(){

    int x; cin >> n >> x; // Lendo o número de elementos do vetor (n) e o elemento a ser procurado (x)

    for(int i=0; i<n; i++){
        int aux; cin >> aux;
        v.push_back(aux);
    }
    sort(v.begin(), v.end()); // Temos que ordenar o vetor

    int ans = buscab(x);
    if(ans >= 0) cout << x << " esta no vetor";
    else cout << x << " nao esta no vetor";



    return 0;
}