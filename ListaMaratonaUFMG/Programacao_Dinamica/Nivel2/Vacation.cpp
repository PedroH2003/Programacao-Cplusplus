#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

const int MAX = 1e5+10;

int n;
vector<long long> a(MAX),b(MAX),c(MAX);
long long memo[MAX][4];

long long dp(int i, int num){
    if(i == n) return 0;    
    if(memo[i][num] != -1) return memo[i][num];

    long long cont = 0;
    if(num == 0 or num != 1){
        cont = max(cont, dp(i+1, 1) + a[i]);
    }

    if(num == 0 or num != 2){
        cont = max(cont, dp(i+1, 2) + b[i]);
    }

    if(num == 0 or num != 3){
        cont = max(cont, dp(i+1, 3) + c[i]);
    }

    return memo[i][num] = cont;
}

int main(){

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    memset(memo, -1, sizeof memo);
    long long ans = dp(0, 0);
    cout << ans << endl;

    return 0;
}