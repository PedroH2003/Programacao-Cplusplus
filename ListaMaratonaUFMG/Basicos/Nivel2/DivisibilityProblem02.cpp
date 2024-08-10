#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int a,b; cin >> a >> b;

        int ans=0;
        if(a % b != 0){
            ans = a % b;
            ans = (b - ans);
        }
        cout << ans << endl;
    }

    return 0;
}