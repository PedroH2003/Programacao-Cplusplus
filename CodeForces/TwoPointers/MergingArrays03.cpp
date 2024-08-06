#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m; cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    vector<int> b(m);
    for(int i=0; i<m; i++) cin >> b[i];
    vector<int> ans(n+m);
    int i=0,j=0;
    while(i < n or j < m){
        if(j == m or i < n and a[i] < b[j]){
            ans[i+j] = a[i];
            i++;
        }
        else{
            ans[i+j] = b[j];
            j++;
        }
    }
    for(auto u: ans) cout << u << " ";

    return 0;
}