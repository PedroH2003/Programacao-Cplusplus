#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> v(n); for(int i=0; i<n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        int aux = v[0];
        long long ans = 0;
        for(int i=1; i<n; i++){
            ans += (v[i] - aux);
        }
        
        cout << ans << endl;
    }

    return 0;
}