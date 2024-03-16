#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n, x, ans=1, limite=2; cin >> n >> x;

        while(n > limite){
            limite = (ans*x)+2;
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}