#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+10, INF = 0x3f3f3f3f;

int main(){

    int n; cin >> n;
    vector<int> dp(MAX, INF);

    dp[0] = 0;
    for(int i=1; i<=n; i++){
        int j = i;
        while(j){
            int d = j % 10;
            j /= 10;
            if(d > 0 and i - d >= 0){
                dp[i] = min(dp[i], dp[i-d] + 1);
            }
        }
    }
    cout << dp[n] << endl;

    return 0;
}