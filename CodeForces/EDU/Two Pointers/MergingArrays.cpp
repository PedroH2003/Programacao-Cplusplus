#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m; cin >> n >> m;
    vector<int> a(n), b(m), ans(n + m); 
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    int i=0,j=0,k=0;
    while(i < a.size() || j < b.size()){
        if(j == b.size() || i < a.size() and a[i] < b[j]){
            ans[k] = a[i];
            i++,k++;
        }else{
            ans[k] = b[j];
            j++,k++;
        }
    }
    for(auto u: ans) cout << u << " ";
    cout << endl;

    return 0;
}