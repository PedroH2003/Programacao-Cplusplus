#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<long long> v(n);
        v[0] = 2;
        for(int i=1; i<n; i++) v[i] = v[i-1] * 2;

        int a = v[n-1];
        for(int i=0; i<(n/2)-1; i++){
            a += v[i];
        }
        int b = 0;
        for(int i=(n/2)-1; i<n-1; i++){
            b += v[i];
        }
        int ans = abs(a - b);
        cout << ans << endl;

    }

    return 0;
}