#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+10, INF = 0x3f3f3f3f;
int n,k;
vector<int> h(MAX);
vector<int> memo(MAX, INF);

int dp(int i){
    if(i == 0) return 0;
    if(memo[i] != INF) return memo[i];

    int ret = INF;
    for(int j = max(0, i-k); j<i; j++){
        ret = min(ret, dp(j) + abs(h[i] - h[j]));
    }
    return memo[i] = ret;
}

int main(){

    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> h[i];
    int ans = dp(n-1);
    cout << ans << endl;

    return 0;
}