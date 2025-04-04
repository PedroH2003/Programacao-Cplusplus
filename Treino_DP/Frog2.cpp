#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;

int main(){

    int n,k; cin >> n >> k;
    vector<int> h(n); for(int i=0; i<n; i++) cin >> h[i];
    vector<int> dp(n); dp[0] = 0;

    for(int i=1; i<n; i++){
        dp[i] = INF;
        for(int j=max(0, i-k); j<i; j++){
            dp[i] = min(dp[i], dp[j] + abs(h[i] - h[j]));
        }
    }
    cout << dp[n-1] << endl;

    return 0;
}