#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    string ans="sim";

    for(int i=2; i*i<=n and ans != "nao"; i++){
        if(n % i == 0) ans = "nao";
    }
    cout << ans << endl;

    return 0;
}