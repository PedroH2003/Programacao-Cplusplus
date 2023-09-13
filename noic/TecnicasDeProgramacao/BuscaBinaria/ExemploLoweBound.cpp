#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> v;

int buscab(int x){

    int ini=0, fim=n, meio, ans=-1;
    while(ini < fim){
        meio = (ini + fim) / 2;

        if(v[meio] >= x){
            fim = meio;
        }
        else{
            ini = meio + 1;
        }
    } 
    if(fim != n){
        ans = fim;
    }

    return ans;
}

int main(){

    int x; cin >> n >> x;

    for(int i=0; i<n; i++){
        int aux; cin >> aux;
        v.push_back(aux);
    }

    int ans = buscab(x);
    cout << ans;


    return 0;
}