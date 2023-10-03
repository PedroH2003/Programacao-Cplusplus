#include <bits/stdc++.h>

using namespace std;

int main(){

    int faixa[4], ans=0; cin >> faixa[0] >> faixa[1] >> faixa[2] >> faixa[3];
    string sequencia; cin >> sequencia;
    
    for(int i=0; i<sequencia.size(); i++){
        int num = sequencia[i] - '0';
        ans += faixa[num-1];
    }

    cout << ans;

    return 0;
}