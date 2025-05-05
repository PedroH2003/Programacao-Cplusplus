#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+10, MOD = 1e9+7;

int main(){

    int n; cin >> n;
    vector<long long> dp(MAX);

    dp[0] = 1;
    for(int i=1; i<=n; i++){
        for(int j = max(0, i-6); j<i; j++){
            dp[i] = (dp[i] + dp[j]) % MOD;
        }
    }
    cout << dp[n] << endl;

    return 0;
}