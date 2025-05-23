#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+10;

int main(){

    int n,w; cin >> n >> w;
    vector<long long> dp(MAX);

    for(int i=0; i<n; i++){
        int peso, valor; cin >> peso >> valor;
        for(int j = w; j >= peso; j--){
            dp[j] = max(dp[j], dp[j - peso] + valor);
        }
    }
    cout << dp[w] << endl;

    return 0;
}