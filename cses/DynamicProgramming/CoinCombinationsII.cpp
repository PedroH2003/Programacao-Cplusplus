#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+10, MOD = 1e9 + 7;

int main() {
    int n, x; cin >> n >> x;
    vector<int> v(n); for(int i=0; i<n; i++) cin >> v[i];
    vector<int> dp(MAX);

    sort(v.begin(), v.end());
    dp[0] = 1;
    for(auto c: v){
        for(int i = c; i <= x; i++){
            dp[i] = (dp[i] + dp[i - c]) % MOD;
        }
    }
    cout << dp[x] << endl;
    
    return 0;
}
