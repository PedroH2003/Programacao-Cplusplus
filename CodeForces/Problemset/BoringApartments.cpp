#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int x, ans=0; cin >> x;

        int aux = x % 10; aux--;
        ans = 10 * aux;

        aux = 1;
        while(x != 0){
            x = x / 10;
            ans += aux;
            aux++;
        }

        cout << ans << endl;

    }

    return 0;
}