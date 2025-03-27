#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m; cin >> n >> m;
    vector<int> a(n); for(int i=0; i<n; i++) cin >> a[i];

    map<int,int> b; for(int i=0; i<m; i++){
        int num; cin >> num;
        b[num]++;
    }

    long long ans = 0;
    for(int i=0; i<n; i++){
        if(b.find(a[i]) != b.end()){
            ans += b[a[i]];
        }
    }
    cout << ans << endl;

    return 0;
}