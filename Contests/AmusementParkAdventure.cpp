#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, h, ans=0; cin >> n >> h;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    for(auto u: v){
        if(u <= h){
            ans++;
        }
    }
    
    cout << ans;

    return 0;
}