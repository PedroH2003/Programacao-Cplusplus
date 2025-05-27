#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m; cin >> n >> m;
    vector<int> a(n); vector<int> b(m); 
    for(int i=0; i<n; i++) cin >> a[i]; 
    for(int i=0; i<m; i++) cin >> b[i];

    int i=0,j=0;
    while(j < b.size()){
        if(i < a.size() and a[i] < b[j]){
            i++;
        }else{
            b[j] = i;
            j++;
        }
    }
    for(auto ans: b) cout << ans << " ";
    cout << endl;

    return 0;
}