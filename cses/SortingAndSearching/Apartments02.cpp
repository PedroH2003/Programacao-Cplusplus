#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m,k; cin >> n >> m >> k;
    vector<int> v(n); for(int i=0; i<n; i++) cin >> v[i];
    vector<int> ap(m); for(int i=0; i<m; i++) cin >> ap[i];

    sort(v.begin(), v.end());
    sort(ap.begin(), ap.end());

    int ans = 0, pos=0;
    for(int i=0; i<n; i++){
        for(int j=pos; j<m; j++){
            if(ap[j] - k <= v[i] and v[i] <= ap[j] + k){
                ans++;
                pos++;
                break;
            }
            else if(v[i] < ap[j] - k){
                break;
            }
            pos++;
        }
    }
    cout << ans << endl;

    return 0;
}