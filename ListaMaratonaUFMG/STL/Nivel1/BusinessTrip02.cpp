#include <bits/stdc++.h>

using namespace std;

int main(){

    int k; cin >> k;
    int v[12];

    for(int i=0; i<12; i++) cin >> v[i];

    sort(v, v+12);
    int ans=0;
    for(int i=11; i>=0; i--){
        if(k <= 0){
            break;
        }
        k -= v[i];
        ans++;
    }

    if(k > 0){
        ans = -1;
    }

    cout << ans;

    return 0;
}