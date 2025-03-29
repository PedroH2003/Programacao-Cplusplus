#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 1e5+10;
int n;
vector<int> a(MAX),b(MAX),c(MAX);
long long memo[MAX][4];

int main(){
    int n; cin >> n;
    vector<int> dp(3);

    for(int dia=0; dia<n; dia++){
        vector<int> new_dp(3);
        vector<int> c(3);
        for(int i=0; i<3; i++) cin >> c[i];

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(i != j){
                    new_dp[j] = max(new_dp[j], dp[i] + c[j]);
                }
            }
        }
        dp = new_dp;
    }
    int ans = max(dp[0], max(dp[1], dp[2]));
    cout << ans << endl;

    return 0;
}