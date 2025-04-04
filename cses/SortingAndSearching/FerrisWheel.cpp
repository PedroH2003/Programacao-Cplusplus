#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; long long x; cin >> n >> x;
    vector<int> v(n); for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());
 
    int ans = 0;
    long long aux = 0;
    int i=0,j=n-1;
    while(i < j){
        aux = v[j] + v[i];

        if(aux <= x){
            j--;
            i++;
        }else{
            j--;
        }
        ans++;
    }
    if(i == j) ans++;
    cout << ans << endl;

    return 0;
}