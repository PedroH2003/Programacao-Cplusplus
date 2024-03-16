#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> a(n); for(int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        string ans="YES";

        for(int i=1; i<n and ans != "NO"; i++) if(a[i] == a[i-1]) ans = "NO";
        cout << ans << endl;
    }

    return 0;
}