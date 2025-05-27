#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v(n); for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int k; cin >> k;
    while(k--){
        int a,b; cin >> a >> b;

        int l=-1; // v[l] < a;
        int r=n; // v[r] >= a;
        while(r > l + 1){
            int m = (l + r) / 2;
            if(v[m] < a) l = m;
            else r = m;
        }
        a = r;

        l=-1; // v[l] <= b;
        r=n; // v[r] > b;
        while(r > l + 1){
            int m = (l + r) / 2;
            if(v[m] <= b) l = m;
            else r = m;
        }
        b = l;

        int ans = (b - a) + 1;
        if(ans < 0) ans = 0;
        cout << ans << endl;
    }

    return 0;
}