#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

const int INF = 0x3f3f3f3f;

int main(){ _

    int n,k; cin >> n >> k;
    vector<int> h(n); for(int i=0; i<n; i++) cin >> h[i];
    vector<int> memo(n, INF);

    memo[0] = 0;
    for(int i=1; i<n; i++){
        for(int j = max(0, i-k); j < i; j++){
            memo[i] = min(memo[i], memo[j] + abs(h[j] - h[i]));
        }
    }
    cout << memo[n-1] << endl;

    return 0;
}