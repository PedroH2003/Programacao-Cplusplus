#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

const long long LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e5+10;
int n,w;
vector<long long> peso(110),valor(110);
long long memo[110][MAX];

long long dp(int item, int carga){
    if(carga < 0) return -LINF;
    if(item == n) return 0;
    long long& p = memo[item][carga];
    if(p != -1) return p;

    return p = max(dp(item+1, carga-peso[item]) + valor[item], dp(item+1, carga));
}

int main(){

    cin >> n >> w;
    for(int i=0; i<n; i++){
        long long p,v; cin >> p >> v;
        peso[i] = p;
        valor[i] = v;
    }
    memset(memo, -1, sizeof memo);
    long long ans = dp(0, w);
    cout << ans << endl;

    return 0;
}