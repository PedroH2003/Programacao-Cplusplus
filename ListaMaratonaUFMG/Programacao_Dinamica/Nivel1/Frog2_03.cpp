#include <bits/stdc++.h>

using namespace std;


#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

const int MAX = 1e5+10;
const int INF = 0x3f3f3f3f;
int h[MAX], n, k;
int memo[MAX];

int dp(int j){
    if(j == 0) return 0;
    if(memo[j] != INF) return memo[j];
    int ret = INF;
    for(int i = max(0, j-k); i<j; i++){
        ret = min(ret, dp(i) + abs(h[j] - h[i]));
    }
    return memo[j] = ret;
}

int main(){

    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> h[i];
    memset(memo, INF, sizeof memo);
    int ans = dp(n-1);
    cout << ans << endl;

    return 0;
}