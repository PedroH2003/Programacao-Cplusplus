#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,k,tempo=240,ans; cin >> n >> k; ans = n;
    tempo -= k;

    for(int i=0; i<n and ans == n; i++){
        tempo -= (5 * (i+1));
        if(tempo < 0) ans = i;
        else if(tempo == 0) ans = i+1;
    }
    cout << ans << endl;

    return 0;
}