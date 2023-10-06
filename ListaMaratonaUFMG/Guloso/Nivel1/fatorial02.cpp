#include <bits/stdc++.h>

using namespace std;

int main(){

    int v[11], ans=0, n; cin >> n;
    v[0] = 1;

    for(int i=1; i<11; i++) v[i] = v[i-1] * i;

    for(int i=10; i>=0; i--){
        int aux = n / v[i];
        ans += aux;
        n -= (aux * v[i]);
    }

    cout << ans << endl;


    return 0;
}