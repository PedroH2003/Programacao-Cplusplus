#include <bits/stdc++.h>

using namespace std;

#define REPI(i, a, b) for(int i=a; i<b; i++)

int main(){
    int n; cin >> n;
    vector<int> a(n);
    REPI(i, 0, n) cin >> a[i];

    int m; cin >> m;
    vector<int> b(m);
    REPI(i, 0, m) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    cout << a[n-1] << " " << b[m-1] << endl;


    return 0;
}