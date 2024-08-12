#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> b(n), a(n);

        for(int i=0; i<n; i++) cin >> b[i];
        int l=0, r=n-1, i=0;
        while(l < r){
            a[i] = b[l];
            i++;
            a[i] = b[r];
            l++; r--; i++;
        }
        if(l == r) a[i] = b[l];
        for(auto u: a) cout << u << " ";
        cout << endl;
    }

    return 0;
}