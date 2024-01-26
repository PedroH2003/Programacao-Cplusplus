#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int a, b; cin >> a >> b;

        int aux = min(a, b);
        aux += aux;

        int aux2 = max(a, b);

        int ans = max(aux, aux2);
        ans *= ans;

        cout << ans << endl;
    }


    return 0;
}