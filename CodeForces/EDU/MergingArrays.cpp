#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m; cin >> n >> m;
    vector<int> a(n); for(int i=0; i<n; i++) cin >> a[i];
    vector<int> b(m); for(int i=0; i<m; i++) cin >> b[i];
    vector<int> ans(n + m);
    
    int i=0,j=0,k=0;
    while(i < n or j < m){
        if(j == m or i < n and a[i] < b[j]){
            ans[k] = a[i];
            i++; k++;
        }
        else{
            ans[k] = b[j];
            j++; k++;
        }
    }
    for(auto u: ans) cout << u << " ";

    return 0;
}