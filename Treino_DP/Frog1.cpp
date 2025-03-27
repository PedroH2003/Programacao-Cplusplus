#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 1e5+10;
int n;
vector<int> h(MAX);
int memo[MAX];

int dp(int i){
    if(i == 0) return 0;
    if(memo[i] != -1) return memo[i];

    int aux = INF;
    for(int j=max(0, i-2); j<i; j++){
        aux = min(aux, dp(j) + abs(h[i] - h[j]));
    }
    return memo[i] = aux;
}

int main(){

    cin >> n;
    for(int i=0; i<n; i++) cin >> h[i];
    memset(memo, -1, sizeof memo);
    int ans = dp(n-1);
    cout << ans << endl;

    return 0;
}