#include <bits/stdc++.h>

using namespace std;

const int MAX = (100 * 1e3) + 10;
const int INF = 0x3f3f3f3f;

int main(){
    int n,w; cin >> n >> w;
    vector<long long> dp(MAX, INF);
    vector<int> p(n),v(n);

    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> p[i] >> v[i];
        sum += v[i];
    }

    dp[0] = 0;
    for(int i=0; i<n; i++){
        int peso = p[i]; int valor = v[i];

        for(int j = sum; j >= valor; j--){
            dp[j] = min(dp[j], dp[j - valor] + peso);
        }
    }

    int ans = 0;
    for(int i = sum; i >= 0; i--) if(dp[i] <= w){
        ans = i;
        break;
    }
    cout << ans << endl;

    return 0;
}