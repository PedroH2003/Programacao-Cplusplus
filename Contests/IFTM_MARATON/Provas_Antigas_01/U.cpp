#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,k,p; long a; cin >> n >> a >> k >> p;
    vector<long long> v(n);
    v[0] = a;
    for(int i=1; i<n; i++){
        v[i] = (v[i-1] * k) % p;
    }

    sort(v.begin(), v.end());
    for(int i=n-5; i<n; i++){
        cout << v[i] << " ";
    }


    return 0;
}