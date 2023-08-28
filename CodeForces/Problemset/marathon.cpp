// https://codeforces.com/problemset/problem/1692/A

#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int v[4]; cin >> v[0] >> v[1] >> v[2] >> v[3];
        int ans = 0;

        for(int i=1; i<4; i++){
            if(v[i] > v[0]){
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}