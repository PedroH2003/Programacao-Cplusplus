#include <bits/stdc++.h>

using namespace std;

int main(){

    int v[3], ans=0;
    for(int i=0; i<3; i++) cin >> v[i];
    sort(v, v+3);

    ans = (v[1] - v[0]) + (v[2] - v[1]);
    cout << ans << endl;

    return 0;
}