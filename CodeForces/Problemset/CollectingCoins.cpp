#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int v[3], n; cin >> v[0] >> v[1] >> v[2] >> n;
        string ans = "NO";
        sort(v, v+3);

        int aux1 = v[2] - v[0];
        int aux2 = v[2] - v[1];
        aux1 += aux2;

        if(n - aux1 >= 0){
            n -= aux1;
            if(n % 3 == 0) ans = "YES";
        }

        cout << ans << endl;
    }

    return 0;
}