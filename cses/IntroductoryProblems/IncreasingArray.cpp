#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    long long ans=0;
    vector<long long> v(n); for(int i=0; i<n; i++) cin >> v[i];

    for(int i=1; i<n; i++){
        if(v[i] < v[i-1]){
            ans += v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }
    cout << ans << endl;

    return 0;
}