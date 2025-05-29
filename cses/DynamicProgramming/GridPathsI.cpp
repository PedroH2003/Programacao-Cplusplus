#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e3+10, MOD = 1e9+7;
char M[MAX][MAX];
int dp[MAX][MAX];

int main(){

    int n; cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> M[i][j];
            dp[i][j] = 0;
        }
    }

    if(M[0][0] == '*'){
        cout << 0 << endl;
        return 0;
    }

    dp[0][0] = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(M[i][j] == '*') continue;
            if(i > 0) dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            if(j > 0) dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD;
        }
    }
    cout << dp[n-1][n-1] << endl;

    return 0;
}