// TA ERRADO

#include <bits/stdc++.h>

using namespace std;

vector<int> a;
int eh_valido(float m){
    int cont=0;
    cout << m << endl;
    for(int i=0; i<a.size(); i++){
        cont += a[i] / m;
    }

    return cont;
}

int main(){

    int n, k; cin >> n >> k;
    for(int i=0; i<n; i++){
        int aux; cin >> aux;
        a.push_back(aux);
    }

    float l=1, r=1e7+10;
    while(l < r){
        double m = (l + r) / 2;
        int aux = eh_valido(m);
        if(aux >= k) l = m;
        else r = m-1;

        cout << l << " " << r << "->" << aux << endl;
    }

    cout << l << endl;

    return 0;
}