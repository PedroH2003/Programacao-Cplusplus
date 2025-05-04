#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    long long mod = 1e9+7;

    long long ans = 1;
    for(int i=0; i<n; i++){
        ans = (ans * 2) % mod;
    }
    cout << ans << endl;

    return 0;
}