#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    
    int m; cin >> m;
    vector<int> b(m);
    for(int i=0; i<m; i++) cin >> b[i];
    sort(b.begin(), b.end());    

    cout << a[n-1] << " " << b[m-1] << endl;

    return 0;
}