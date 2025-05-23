#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+10, INF = 0x3f3f3f3f;
int n;
vector<int> h(MAX);
vector<int> dp(MAX, INF);

int main(){

    cin >> n;
    for(int i=0; i<n; i++) cin >> h[i];

    dp[0] = 0;
    for(int i=1; i<n; i++){
        for(int j = max(0, i-2); j<i; j++){
            dp[i] = min(dp[i], dp[j] + abs(h[i] - h[j]));
        }
    }
    cout << dp[n-1] << endl;

    return 0;
}