#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main(){ _
    int n,k,ans=0; cin >> n >> k;
    vector<int> v(n); for(int i=0; i<n; i++) cin >> v[i];

    for(int i=0; i<k; i++){
        int num; cin >> num;

        auto lb = lower_bound(v.begin(), v.end(), num);
        if(lb != v.end() and *lb == num) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}