#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f, MAX = (100 * 1e3)+10;

int main(){

    int n,w; cin >> n >> w;
    long long dp[MAX];
    vector<int> peso(n),valor(n);

    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> peso[i] >> valor[i];
        sum += valor[i];
    }

    memset(dp, INF, sizeof dp);
    dp[0] = 0;
    for(int i=0; i<n; i++){
        for(int j = sum; j >= valor[i]; j--){
            dp[j] = min(dp[j], dp[j - valor[i]] + peso[i]);
        }
    }

    int ans = 0;
    for(int i = sum; i >= 0; i--) if(dp[i] <= w){
        ans = i;
        break;
    }
    cout << ans << endl;

    return 0;
}