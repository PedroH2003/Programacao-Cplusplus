#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n, a=0, b=0; cin >> n;
        vector<int> coins(n);
        for(int i=0; i<n; i++){
            coins[i] = pow(2, i+1);
            if(i <= (n/2)-2 or i == n-1){
                a += coins[i];
            }
            else{
                b += coins[i];
            }
        }
        int ans = a - b;
        if(ans < 0) ans *= -1;

        cout << ans << endl;
    }

    return 0;
}