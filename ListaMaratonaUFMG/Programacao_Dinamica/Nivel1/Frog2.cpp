#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 1e5+10;
int n,k;
vector<int> h;
int memo[MAX];

int dp(int s){
    if(s == 0) return 0;
    if(memo[s] != INF) return memo[s];

    int ret = INF;
    for(int i=max(0, s-k); i<s; i++){
        ret = min(ret, dp(i) + abs(h[i] - h[s]));
    }

    return memo[s] = ret;
}

int main(){

    cin >> n >> k;
    for(int i=0; i<n; i++){
        int num; cin >> num;
        h.push_back(num);
    }
    memset(memo, INF, sizeof memo);
    int ans = dp(n-1);
    cout << ans << endl;

    return 0;
}