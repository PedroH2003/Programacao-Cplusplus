#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main(){

    int n; cin >> n;
    vector<int> v(n-1);
    for(int i=0; i<n-1; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int i;
    for(i=0; i<n-1; i++){
        if(i+1 != v[i]) break;
    }
    cout << i+1 << endl;

    return 0;
}