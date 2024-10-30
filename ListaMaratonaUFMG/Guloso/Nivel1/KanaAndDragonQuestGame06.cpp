#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int x,n,m; cin >> x >> n >> m;

        while(x - (m*10) > 0 and n > 0){
            x /= 2;
            x += 10;
            n--;
        }
        x -= (m*10);
        if(x > 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}