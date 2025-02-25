#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

const int INF = 0x3f3f3f3f;

int main(){

    int n,k; cin >> n >> k;
    vector<int> memo(n), h(n);

    for(int i=0; i<n; i++) cin >> h[i];

    memo[0] = 0;
    for(int i=1; i<n; i++){
        memo[i] = INF;
        for(int j=max(0, i-k); j<i; j++){
            memo[i] = min(memo[i], memo[j] + abs(h[i] - h[j]));
        }
    }
    cout << memo[n-1] << endl;

    return 0;
}