#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> dp(3);

    for(int i=0; i<n; i++){
        vector<int> new_dp(3);
        vector<int> c(3);
        cin >> c[0] >> c[1] >> c[2];

        for(int j=0; j<3; j++){
            for(int w=0; w<3; w++){
                if(j != w){
                    new_dp[w] = max(new_dp[w], dp[j] + c[w]);
                }
            }
        }
        dp = new_dp;
    }
    int ans = 0;
    for(int i=0; i<3; i++) ans = max(ans, dp[i]);
    cout << ans << endl;

    return 0;
}