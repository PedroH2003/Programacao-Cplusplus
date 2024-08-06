#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m; cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    vector<int> b(m);
    for(int i=0; i<m; i++) cin >> b[i];

    vector<int> ans(m);
    int j=0;
    for(int i=0; i<m; i++){
        while(j < n and a[j] < b[i]){
            j++;
        }
        ans[i] = j;
    }
    for(auto u: ans) cout << u << " ";

    return 0;
}