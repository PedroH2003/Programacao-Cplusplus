#include <bits/stdc++.h>

using namespace std;

const long long INF = 0x3f3f3f3fll;
const int MAX = 100 * 1e3;

int main(){

    int n,w; cin >> n >> w;
    vector<long long> dp(MAX+1, INF);

    vector<int> peso(n),valor(n);
    long long soma = 0;
    for(int i=0; i<n; i++){
        cin >> peso[i] >> valor[i];
        soma += valor[i];
    }

    dp[0] = 0;
    for(int i=0; i<n; i++){
        int p = peso[i];
        int v = valor[i];

        for(long long j=soma; j>=v; j--){
            dp[j] = min(dp[j], dp[j-v] + p);
        }
    }
    
    long long ans=0;
    for(long long i=soma; i>=0; i--) if(dp[i] <= w){
        ans = i;
        break;
    }
    cout << ans << endl;

    return 0;
}