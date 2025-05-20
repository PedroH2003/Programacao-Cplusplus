#include <bits/stdc++.h>

using namespace std;

const int MAX = (1e3 * 100) + 10;
const int INF = 0x3f3f3f3f;

int main(){

    int n, w; cin >> n >> w;
    vector<int> dp(MAX, INF);
    vector<int> peso(n),valor(n);

    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> peso[i] >> valor[i];
        sum += valor[i];
    }

    dp[0] = 0;
    for(int i=0; i<n; i++){
        for(int j = sum; j >= valor[i]; j--){
            dp[j] = min(dp[j], dp[j - valor[i]] + peso[i]);
        }
    }

    for(int i=sum; i>=0; i--) if(dp[i] <= w){
        cout << i << endl;
        break;
    }

    return 0;
}