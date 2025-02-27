#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

const long long LINF = 0x3f3f3f3f3f3f3f3fll;

int N,W;
vector<int> w(110),v(110);
long long memo[110][100010];

long long dp(int i, int carga){
    if(carga < 0) return -LINF;
    if(i == N) return 0;
    long long& p = memo[i][carga];
    if(p != -1) return p;

    return p = max(dp(i+1, carga - w[i]) + v[i], dp(i+1, carga));
}

int main(){ _

    cin >> N >> W;
    for(int i=0; i<N; i++){
        cin >> w[i] >> v[i];
    }
    memset(memo, -1, sizeof memo);
    long long ans = dp(0, W);
    cout << ans << endl;

    return 0;
}