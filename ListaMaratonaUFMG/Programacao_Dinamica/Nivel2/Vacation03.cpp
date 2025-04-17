#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;

int main(){

    int n; cin >> n;
    vector<int> dp(3); 

    for(int i=0; i<n; i++){
        vector<int> new_dp(3, -1);
        vector<int> aux(3);
        cin >> aux[0] >> aux[1] >> aux[2];

        for(int j=0; j<3; j++){
            for(int z=0; z<3; z++){
                if(j != z){
                    new_dp[j] = max(new_dp[j], dp[z] + aux[j]);
                }
            }
        }
        dp = new_dp;
    }
    
    int ans = -1;
    for(auto u: dp) ans = max(ans, u);
    cout << ans << endl;

    return 0;
}