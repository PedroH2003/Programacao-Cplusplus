#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n); for(int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        int l=0, r=n-1, ans=0;
        while(l < r){
            ans += (a[r] - a[l]);
            r--;
            l++;
        }
        cout << ans << endl;
    }

    return 0;
}