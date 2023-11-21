#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k; cin >> n >> k;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    for(int i=0; i<k; i++){
        int aux; cin >> aux;

        int num = lower_bound(v.begin(), v.end(), aux) - v.begin();

        if(num < n and v[num] == aux) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}