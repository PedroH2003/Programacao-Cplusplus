#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,k,ans=0; cin >> n >> k;
    vector<int> v(n); 
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(5 - v[i] >= k) ans++;
    }
    ans /= 3;
    cout << ans << endl;

    return 0;
}