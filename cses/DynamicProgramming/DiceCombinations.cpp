#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;

int main(){
    int n; cin >> n;
    vector<int> dp(n+1, 0);
    dp[0] = 1;

    for(int i=1; i<n+1; i++){
        for(int j = max(0, i-6); j < i; j++){
            dp[i] = (dp[i] + dp[j]) % MOD;
        }
    }
    cout << dp[n] << endl;

    return 0;
}