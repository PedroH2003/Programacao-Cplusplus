#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

const int MAX = 1e5+10;
const int INF = 0x3f3f3f3f;

int n,k;
vector<int> h(MAX);
vector<int> memo(MAX, -1);


int dp(int i){
    if(i == 0) return 0;
    if(memo[i] != -1) return memo[i];

    int ret = INF;
    for(int j = max(0, i-k); j < i; j++){
        ret = min(ret, dp(j) + abs(h[j] - h[i]));
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