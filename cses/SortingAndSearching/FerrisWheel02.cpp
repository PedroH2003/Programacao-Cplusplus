#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,x; cin >> n >> x;
    vector<int> v(n); for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int l=0,r=n-1;
    int ans = 0;
    while(l < r){
        long long num = v[r] + v[l];
        if(num <= x){
            r--;
            l++;
        }
        else{
            r--;
        }
        ans++;
    }
    if(l == r) ans++;
    cout << ans << endl;

    return 0;
}
