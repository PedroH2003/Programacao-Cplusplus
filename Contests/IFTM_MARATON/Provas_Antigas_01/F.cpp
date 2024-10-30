#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    char ans='S';
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i] > v[0]) ans='N';
    }
    cout << ans << endl;

    return 0;
}