#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+10, INF = 0x3f3f3f3f;

int main(){

    int n,x; cin >> n >> x;
    vector<int> v(n); for(int i=0; i<n; i++) cin >> v[i];
    vector<int> dp(MAX, INF);

    dp[0] = 0;
    for(int i=1; i<=x; i++){
        for(int j=0; j<n; j++){
            if(i - v[j] >= 0){
                dp[i] = min(dp[i], dp[i - v[j]] + 1);
            }
        }
    }
    if(dp[x] == INF) cout << -1 << endl;
    else cout << dp[x] << endl;

    return 0;
}