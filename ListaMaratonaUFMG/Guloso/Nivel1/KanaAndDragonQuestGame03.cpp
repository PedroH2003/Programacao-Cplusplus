#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int x, n, m; cin >> x >> n >> m;
        string ans="YES";

        while(x - (m*10) > 0 and n){
            x = (x/2) + 10;
            n--;
        }
        x -= (m*10);
        if(x > 0) ans = "NO";

        cout << ans << endl;
    }


    return 0;
}