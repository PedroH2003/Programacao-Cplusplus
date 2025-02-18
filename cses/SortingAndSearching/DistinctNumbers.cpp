#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,ans=1; cin >> n;
    vector<int> v(n); for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    for(int i=1; i<n; i++) if(v[i] > v[i-1]) ans++;
    cout << ans << endl;

    return 0;
}