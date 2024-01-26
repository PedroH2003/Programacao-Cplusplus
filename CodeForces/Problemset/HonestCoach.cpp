#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> v(n);

        for(int i=0; i<n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        int ans=v[1] - v[0];
        for(int i=1; i<n; i++){
            if(v[i] - v[i-1] < ans){
                ans = v[i] - v[i-1];
            }
        }

        cout << ans << endl;
    }


    return 0;
}